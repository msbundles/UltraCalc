# Compiling UltraCalc from source
## Compiling on GNU/Linux
### Requirements
 - CMake <= 3.16.3
 - A C++ compiler e.g., g++, clang.
 - Git
### Build Instructions
 1. Clone this repository with ```git clone https://github.com/msbundles/UltraCalc.git```
 2. Run ```mkdir build && cd build```.
 3. Run ```cmake -G "Unix Makefiles" ..``` to generate build files for your system
 4. Run ```make``` to compile UltraCalc
 5. Run ```sudo make install``` to install UltraCalc to your ```/user/bin```
 6. Now you can use UltraCalc by running ```ultracalc``` in your terminal
 
## Compiling on Windows
### Requirements
 - Visual Studio (2019 was used as of writing)
### Build Instructions
 1. Open Visual Studio as administrator 
 1. Clone this repository using the button when when you start Visual Studio with this URL:```https://github.com/msbundles/UltraCalc.git```
 2. Open UltraCalc.cpp
 3. Open the Build menu and select Build All
 4. After Build All finishes, then select Install UltraCalc
 5. After UltraCalc is installed you can follow [this](https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/) tutorial on how to add directories to your path in Windows. The path you will be adding is ```C:\Program Files\UltraCalc```
 7. After you put UltraCalc in your path, you can use it in the terminal by running ```ultracalc```
