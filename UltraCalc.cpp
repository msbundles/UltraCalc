#include <iostream>
#include <cmath>
#include <string>
#include <unistd.h>
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

//Interactive mode

void interactive(){
    while (loop){
        //Getting user choice of function
        std::cout << "Type q to quit\n";
        std::cout << "Type + to add\n";
        std::cout << "Type - to subtract\n";
        std::cout << "Type * to multiply\n";
        std::cout << "Type / to divide\n";
        std::cout << "Type s for square root\n";
        std::cout << "Type h for hypotenuse\n";
        std::cout << "Type d for distance formula\n";
        std::cout << "Type m for midpoint formula\n";
        std::cout << "Type qf for quadratic formula\n";
        std::cout << "What would you like to do? ";
        std::cin >> symbol;
        //Compareing the input string to determine desired function
        if (symbol == "+"){
            try{
                add();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "-"){
            try{
                sub();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "*"){
            try{
                mul();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "/"){
            try{
                div();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "s"){
            try{
                sqr();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "h"){
            try{
                hypote();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "d"){
            try{
                dist();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "m"){
            try{
                mid();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "qf"){
            try{
                quad();
            }
            catch(std::out_of_range){
                std::cout << "Your input was too large, please try again.\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or unknown symbols please try again.\n";
                continue;
            }
        }
        else if (symbol == "q"){
            break;
        }
        //Input protection
        else{
            std::cout << "Your input is not recognized, please try again.\n";
            continue;
        }
        //Allowing for multiple calculations in a single session
        std::string q;
        std::cout << "Would you like to make another calculation (y/n)? ";
        std::cin >> q;
        if (q == "y"){
            loop = true;
        }
        else{
            loop = false;
        } 
    }
}

//CLI Functions
/*
CLI argument associations
-+ = add
-s = subtract
-* = multiply
-/ = divide
-r = square root
-d = distance formula
-m = midpoint formula
-q = quadratic formula
-i = interactive mode
-h = help
*/

void printHelp(){
    std::cerr << "Usage: " << "ultracalc" << " <option>\n"
              << "Options:\n"
              << "\t-h\tShow this help message\n"
              << "\t-+\tAdd\n"
              << "\t-s\tSubtract\n"
              << "\t-*\tMultiply\n"
              << "\t-/\tDivide\n"
              << "\t-r\tSquare root\n"
              << "\t-d\tDistance formula\n"
              << "\t-m\tMidpoint formula\n"
              << "\t-q\tQuadratic formula\n"
              << "\t-i\tInteractive mode" << std::endl;
}

void parseArgs(int argc, char *argv[]){
    int opt;
    while ((opt = getopt(argc, argv, "+s*/rhdmqi")) != -1) {
        switch (opt) {
        case '+':
            add();
            break;
        case 's':
            sub();
            break;
        case '*':
            mul();
            break;
        case '/':
            div();
            break;
        case 'r':
            sqr();
            break;
        case 'd':
            dist();
            break;
        case 'm':
            mid();
            break;
        case 'q':
            quad();
            break;
        case 'i':
            interactive();
            break;
        case 'h':
            printHelp();
            break;
        }
    }
    printHelp();
}

int main(int argc, char* argv[]){
    parseArgs(argc, argv);
    return 0;
}
