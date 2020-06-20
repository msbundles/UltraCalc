//Importing all of the functions and libraries
#include "functions.cpp"
int main(){
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
        else if (symbol == "m"){
            try{
                mid();
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
        else if (symbol == "qf"){
            try{
                quad();
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
