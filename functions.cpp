#include <iostream>
#include <cmath>
#include <string>
#define _USE_MATH_DEFINES

//Function selection char
std::string symbol;
//Boolean for the loop
bool loop = true;
//Globals for the input strings, you could do it either way but this is less lines
std::string in1;
std::string in2;

//Utility functions

//Returns the value of pi if the user inputs the string "pi"
std::string returnPi(std::string in){
    std::string pi = std::to_string(M_PI);
    if(in == "pi"){
        return pi;
    }
    else return in; 
}

//Arithmetic functions

//Addition function
void add(){
    std::cout << "What is the first addend? ";
    std::cin >> in1;
    std::cout << "What is the second addend? ";
    std::cin >> in2;
    double in1d = stof(returnPi(in1));
    double in2d = stof(returnPi(in2));
    std::cout << "The result is: " << in1d + in2d << std::endl;
}

//Subtraction function
void sub(){
    std::cout << "What is the minuend? ";
    std::cin >> in1;
    std::cout << "What is the subtrahend? ";
    std::cin >> in2;
    double in1d = stof(returnPi(in1));
    double in2d = stof(returnPi(in2));
    std::cout << "The result is: " << in1d - in2d << std::endl;
}

//Division function
void div(){
    std::cout << "What is the dividend? ";
    std::cin >> in1;
    std::cout << "What is the divisor? ";
    std::cin >> in2;
    double in1d = stof(returnPi(in1));
    double in2d = stof(returnPi(in2));
    std::cout << "The result is: " << in1d / in2d << std::endl;
}

//Multiplication function
void mul(){
    std::cout << "What is the first factor? ";
    std::cin >> in1;
    std::cout << "What is the second factor? ";
    std::cin >> in2;
    double in1d = stof(returnPi(in1));
    double in2d = stof(returnPi(in2));
    std::cout << "The result is: " << in1d * in2d << std::endl;
}

//Square root function
void sqr(){
    std::cout << "What would you like to find the square root of? ";
    std::cin >> in1;
    double in1d = stof(returnPi(in1));
    std::cout << "The result is: " << sqrt(in1d) << std::endl;
}

//Hypotenuse function
void hypote(){
    std::cout << "Input the legs of a right triangle in order to find the hypotenuse\n";
    std::cout << "Leg 1: ";
    std::cin >> in1;
    std::cout << "Leg 2: ";
    std::cin >> in2;
    double in1d = stof(returnPi(in1));
    double in2d = stof(returnPi(in2));
    std::cout << "The hypotenuse is " << hypot(in1d, in2d) << std::endl;
}

//Distance function
void dist(){
    std::string x1;
    std::string x2;
    std::string y1;
    std::string y2;
    std::cout << "Input your points for the distance formula\n";
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "y1: ";
    std::cin >> y1;
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "y2: ";
    std::cin >> y2;
    double x1d = stof(returnPi(x1));
    double x2d = stof(returnPi(x2));
    double y1d = stof(returnPi(y1));
    double y2d = stof(returnPi(y2));
    double x = x2d - x1d;
    double y = y2d - y1d; 
    std::cout << "The distance between the points is " << sqrt(pow(x, 2) + pow(y, 2)) << std::endl;
}

//Midpoint formula function
void mid(){
    std::string x1;
    std::string x2;
    std::string y1;
    std::string y2;
    std::cout << "Input your points for the midpoint formula\n";
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "y1: ";
    std::cin >> y1;
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "y2: ";
    std::cin >> y2;
    double x1d = stof(returnPi(x1));
    double x2d = stof(returnPi(x2));
    double y1d = stof(returnPi(y1));
    double y2d = stof(returnPi(y2));
    double x = x1d + x2d;
    double y = y1d + y2d;
    std::cout << "The the midpoint of the line segment is " << x / 2 << "," << y / 2 << std::endl;
}

//Quadratic formula function
void quad(){
    std::string a;
    std::string b;
    std::string c;
    std::cout << "Input your variables for the quadratic formula\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;    
    double ad = stof(returnPi(a));
    double bd = stof(returnPi(b));
    double cd = stof(returnPi(c)); 
    double discrim = sqrt((pow(bd,2)) - (4*(ad*cd)));
    double x1 = ((bd*-1)+discrim)/(ad*2);
    double x2 = ((bd*-1)-discrim)/(ad*2);
    std::cout << "Your first solution is " <<x1 << std::endl;
    std::cout << "Your second solution is " <<x2 << std::endl;
}
