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
    std::cout << "The result is: " << stoi(in1) + stoi(in2) << std::endl;
}

//Subtraction function
void sub(){
    std::cout << "What is the minuend? ";
    std::cin >> in1;
    std::cout << "What is the subtrahend? ";
    std::cin >> in2;
    std::cout << "The result is: " << stoi(in1) - stoi(in2) << std::endl;
}

//Division function
void div(){
    std::cout << "What is the dividend? ";
    std::cin >> in1;
    std::cout << "What is the divisor? ";
    std::cin >> in2;
    std::cout << "The result is: " << stoi(in1) / stoi(in2) << std::endl;
}

//Multiplication function
void mul(){
    std::cout << "What is the first factor? ";
    std::cin >> in1; 
    std::cout << "What is the second factor? ";
    std::cin >> in2;
    std::cout << "The result is: " << stoi(in1) * stoi(in2) << std::endl;
}

//Square root function
void sqr(){
    std::cout << "What would you like to find the square root of? ";
    std::cin >> in1;
    std::cout << "The result is: " << sqrt(stoi(in1)) << std::endl;
}

//Hypotenuse function
void hypote(){
    std::cout << "Input the legs of a right triangle in order to find the hypotenuse\n";
    std::cout << "Leg 1: ";
    std::cin >> in1;
    std::cout << "Leg 2: ";
    std::cin >> in2;
    std::cout << "The hypotenuse is " << hypot(stoi(in1), stoi(in2)) << std::endl;
}

//Distance function
void dist(){
    std::string x1;
    std::string x2;
    std::string y1;
    std::string y2;
    std::cout << "Input your points for the distance equation\n";
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "y1: ";
    std::cin >> y1;
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "y2: ";
    std::cin >> y2;
    int x = stoi(x2) - stoi(x1);
    int y = stoi(y2) - stoi(y1);
    std::cout << "The distance between the points is " <<sqrt(pow(x, 2)+pow(y,2))<< std::endl;    
}

main(){
    std::cout << "WARNING: Like everything, this program is not perfect so please\ndouble check that your inputs are correct before submiting them.\n";
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
        std::cout << "What would you like to do? ";
        std::cin >> symbol;
        //Compareing the input string to determine desired function
        if (symbol == "+"){
            try{
                add();
            }
            catch(std::out_of_range){
                std::cout << "your input was too large, please try again\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or symbols, please try again\n";
                continue;
            }
        }
        else if (symbol == "-"){
            try{
                sub();
            }
            catch(std::out_of_range){
                std::cout << "your input was too large, please try again\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or symbols, please try again\n";
                continue;
            }
        }
        else if (symbol == "*"){
            try{
                mul();
            }
            catch(std::out_of_range){
                std::cout << "your input was too large, please try again\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or symbols, please try again\n";
                continue;
            }
        }
        else if (symbol == "/"){
            try{
                div();
            }
            catch(std::out_of_range){
                std::cout << "your input was too large, please try again\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or symbols, please try again\n";
                continue;
            }
        }
        else if (symbol == "s"){
            try{
                sqr();
            }
            catch(std::out_of_range){
                std::cout << "your input was too large, please try again\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or symbols, please try again\n";
                continue;
            }
        }
        else if (symbol == "h"){
            try{
                hypote();
            }
            catch(std::out_of_range){
                std::cout << "your input was too large, please try again\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or symbols, please try again\n";
                continue;
            }
        }
        else if (symbol == "d"){
            try{
                dist();
            }
            catch(std::out_of_range){
                std::cout << "your input was too large, please try again\n";
                continue;
            }
            catch(std::invalid_argument){
                std::cout << "Your input contains letters or symbols, please try again\n";
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
    return 0;
}