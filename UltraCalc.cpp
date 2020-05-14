#include <iostream>
#include <cmath>
//imports for the mostly useless sleep
#include <string>
using namespace std;

//Function selection char
char symbol;
//Boolean for the loop
bool loop = true;
//globals for the input strings, you could do it either way but this is less lines
string in1;
string in2;

//Addition function
void add(){
    cout << "What is the first addend? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    cout << "What is the second addend? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    else{
        cout << "The result is: " << stoi(in1) + stoi(in2) <<endl;
    }
}

//Subtraction function
void sub(){
    cout << "What is the minuend? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    cout << "What is the subtrahend? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    else{
        cout << "The result is: " << stoi(in1) - stoi(in2) <<endl;
    }
}

//Division function
void div(){
    cout << "What is the dividend? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    cout << "What is the divisor? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    else{
        cout << "The result is: " << stoi(in1) / stoi(in2) <<endl;
    }
}

//Multiplication function
void mul(){
    cout << "What is the first factor? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    cout << "What is the second factor? ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    else{
    cout << "The result is: " << stoi(in1) * stoi(in2) <<endl;
    }
}

//Square foot function
void sqr(){
    cout << "What would you like to find the square root of? ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    else{
    cout << "The result is: " << sqrt(stoi(in1)) << endl;
    }
}

void hypote(){
    cout << "Input the legs of a right triangle in order to find the hypotenuse\n";
    cout <<"Leg 1: ";
    cin >> in1;
    if (std::string::npos != in1.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    cout <<"Leg 2: ";
    cin >> in2;
    if (std::string::npos != in2.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()?/.,<>-=*&^%$#@!()?/.,<>""''-=*&^%$#@!")){
        return;
    }
    else{
        cout << "The hypotenuse is "<< hypot(stoi(in1), stoi(in2)) <<endl;
    }
}

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
            cout << "Your input contains letters or symbols, please try again\n";
            continue;
        }
        else if (symbol == 45){
            sub();
            cout << "Your input contains letters or symbols, please try again\n";
            continue;
        }
        else if (symbol == 42){
            mul();
            cout << "Your input contains letters or symbols, please try again\n";
            continue;
        }
        else if (symbol == 47){
            div();
            cout << "Your input contains letters or symbols, please try again\n";
            continue;
        }
        else if (symbol == 115){
            sqr();
            cout << "Your input contains letters or symbols, please try again\n";
            continue;
        }
        else if (symbol == 104){
            hypote();
            cout << "Your input contains letters or symbols, please try again\n";
            continue;
        }
        //Input protection
        else{
            cout <<"Your input is not recognized, please try again.\n\n";
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