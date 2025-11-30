#include "Vshift.h"
#include "verilated.h"

#include <iostream>

vluint64_t main_time = 0;  // simulation time

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vshift* top = new Vshift;

    // Initialize
    top->clk = 0;
    top->in_data = 0;

    std::cout << "Starting simulation\n";

    // Main simulation loop
    for (int cycle = 0; cycle < 10; cycle++) {

        // Toggle clock (two half cycles)
        for (int i = 0; i < 2; i++) {
            top->clk ^= 1;
            top->eval();
            main_time++;
        }

        // Drive input
        top->in_data = cycle + 1;

        // Tick clock again so output updates
        top->clk ^= 1;
        top->eval();
        main_time++;
        top->clk ^= 1;
        top->eval();
        main_time++;

        // Read output
        std::cout << "Cycle " << cycle
                  << " input=" << (cycle + 1)
                  << " output=" << top->out_data << "\n";
    }

    top->final();
    delete top;
    return 0;
}
