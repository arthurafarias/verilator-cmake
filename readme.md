# CMake for Verilator

This project aims to setup CMake in order to generate correctly the cossimulation using CMake.

It is fully compatible with Visual Studio Code so you cand actually debug your C++ code correctly.

To setup your project, just fork this and do your normal C++ lifecycle.

```bash
mkdir build
cd build
cmake ..
make -j$(nproc)
```

to add a new target you just need to add the following lines in your cmake:

```cmake
add_verilated_testbench_custom(
    TARGET other
    CPP_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/other-tb.cpp
    CPP_INCLUDE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    VERILOG_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/src/other.v
)
```

you have to pay attention, that the target name should be the verilog file name and the testbench also.

**If you find this usefull, please, contribute!**

**[Paypal](https://www.paypal.com/cgi-bin/webscr?business=afarias.arthur@gmail.com&cmd=_xclick&currency_code=EUR&amount=25&item_name=25€ Contribution)**

-- **[Bitcoin](bitcoin:bc1q....?amount=0.00025)**