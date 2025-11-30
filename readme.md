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

**[Paypal](https://bit.ly/3XmD69g)**

-- **[Bitcoin](bitcoin:bc1q5w2mm2fwg3q35pkulvv6t80c88vlgnhujcswlz?amount=0.00025)**