# UltraCalc
This repository contains two programs, UltraCalc written in C++
C++ and UltraCalc written in python. The C++ version will continue to be improved and added on to and will most likely be the main focus of this repository. The program is a four function calculator with other assorted features. The python version is hosted [here](https://msbundles.github.io/UltraCalc/). I am also working on porting the C++ version of UltraCalc to WebAssembly [here](https://github.com/msbundles/UltraCalcOnline)
## Compilation instructions for the C++ version
The c++ version requires gcc or equivalent and has only been tested on Linux. The command for gcc is

```g++ UltraCalc.cpp -std=gnu++11 -o ultracalc```

 If you wish to be able to run the program system wide, you can add the binary to your ```/usr/bin``` directory.
