#include <iostream>
#include <cmath>
//imports for the mostly useless sleep
#include <chrono>
#include <thread>
#include <string>
using namespace std;

//Addition function
void add(){
    string in1;
    string in2;
    cout << "What is the first addend? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout <<"Your input contains letters, please try again\n";
        add();
    }
    cout << "What is the second addend? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        add();
    }
    cout << "The result is: " << stoi(in1) + stoi(in2) <<endl;
}

//Subtraction function
void sub(){
    string in1;
    string in2;
    cout << "What is the minuend? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        sub();
    }
    cout << "What is the subtrahend? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        sub();
    }
    cout << "The result is: " << stoi(in1) - stoi(in2) <<endl;
}

//Division function
void div(){
    string in1;
    string in2;
    cout << "What is the dividend? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        div();
    }
    cout << "What is the divisor? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        div();
    }
    cout << "The result is: " << stoi(in1) / stoi(in2) <<endl;
}

//Multiplication function
void mul(){
    string in1;
    string in2;
    cout << "What is the first factor? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        mul();
    }
    cout << "What is the second factor? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        mul();
    }
    cout << "The result is: " << stoi(in1) * stoi(in2) <<endl;
}

//Square foot function
void sqr(){
    string in1;
    cout << "What would you like to find the square root of? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        sqr();
    }
    cout << "The result is: " << sqrt(stoi(in1)) << endl;
}

void hypote(){
    string in1;
    string in2;
    cout << "Input the legs of a right triangle in order to find the hypotenuse\n";
    cout <<"Leg 1: ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        hypote();
    }
    cout <<"Leg 2: ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
    {
        cout << "Your input contains letters, please try again\n";
        hypote();
    }
    cout << "The hypotenuse is "<< hypot(stoi(in1), stoi(in2)) <<endl;
}

//Function selection char
char symbol;
//Boolean for the loop
bool loop = true;
main(){
    while (loop){
        //Getting user choice of function
        cout << "Type + to add\n";
        cout << "Type - to subtract\n";
        cout << "Type * to multiply\n";
        cout << "Type / to divide\n";
        cout << "Type s for square root\n";
        cout << "Type h for hypotenuse\n";
        cout << "What would you like to do? ";
        cin >> symbol;
        //Char needs to be compaired to it's ASCII equivleant in decimal
        if (symbol == 43){
            add();
        }
        else if (symbol == 45){
            sub();
        }
        else if (symbol == 42){
            mul();
        }
        else if (symbol == 47){
            div();
        }
        else if (symbol == 115){
            sqr();
        }
        else if (symbol == 104)
        {
            hypote();
        }
        //Input protection
        else{
            cout <<"Your input is not recognized, please try again.\n\n";
            //Sleep that is kind of unnecessary but nice for UX
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            continue;
        }
        //Allowing for multiple calculations in a single session
        char q;
        cout << "Would you like to make another calculation (y/n)? ";
        cin >> q;
        if (q == 121){
            loop = true;
        }
        else{
            loop = false;
        } 
    }
    return 0;
}