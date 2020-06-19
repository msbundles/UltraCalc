#include <iostream>
#include <cmath>
#include <string>

//Function selection char
std::string symbol;
//Boolean for the loop
bool loop = true;
//Globals for the input strings, you could do it either way but this is less lines
std::string in1;
std::string in2;

//Addition function
void add(){
    std::cout << "What is the first addend? ";
    std::cin >> in1;
    std::cout << "What is the second addend? ";
    std::cin >> in2;
    std::cout << "The result is: " << stof(in1) + stof(in2) << std::endl;
}

//Subtraction function
void sub(){
    std::cout << "What is the minuend? ";
    std::cin >> in1;
    std::cout << "What is the subtrahend? ";
    std::cin >> in2;
    std::cout << "The result is: " << stof(in1) - stof(in2) << std::endl;
}

//Division function
void div(){
    std::cout << "What is the dividend? ";
    std::cin >> in1;
    std::cout << "What is the divisor? ";
    std::cin >> in2;
    std::cout << "The result is: " << stof(in1) / stof(in2) << std::endl;
}

//Multiplication function
void mul(){
    std::cout << "What is the first factor? ";
    std::cin >> in1;
    std::cout << "What is the second factor? ";
    std::cin >> in2;
    std::cout << "The result is: " << stof(in1) * stof(in2) << std::endl;
}

//Square root function
void sqr(){
    std::cout << "What would you like to find the square root of? ";
    std::cin >> in1;
    std::cout << "The result is: " << sqrt(stof(in1)) << std::endl;
}

//Hypotenuse function
void hypote(){
    std::cout << "Input the legs of a right triangle in order to find the hypotenuse\n";
    std::cout << "Leg 1: ";
    std::cin >> in1;
    std::cout << "Leg 2: ";
    std::cin >> in2;
    std::cout << "The hypotenuse is " << hypot(stof(in1), stof(in2)) << std::endl;
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
    int x = stof(x2) - stof(x1);
    int y = stof(y2) - stof(y1);
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
    int x = stof(x1) + stof(x2);
    int y = stof(y1) + stof(y2);
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
    float af = stof(a);
    float bf = stof(b);
    float cf = stof(c); 
    float discrim = sqrt((pow(bf,2)) - (4*(af*cf)));
    float x1 = ((bf*-1)+discrim)/(af*2);
    float x2 = ((bf*-1)-discrim)/(af*2);
    std::cout << "Your first solution is " <<x1 << std::endl;
    std::cout << "Your second solution is " <<x2 << std::endl;
}
