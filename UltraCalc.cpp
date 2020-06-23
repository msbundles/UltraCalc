//Importing all of the functions and libraries
#include "includes/functions.cpp"
#include <includes/CmdParser/cmdparser.hpp>
int main(int argc, char** argv){
    cli::Parser parser(argc, argv);
    parser.set_optional<std::string>("i", "interactive", "Run ultracalc in interactive mode");
    parser.set_optional<std::string>("+", "function", "Run the addition function as a singleshot");
    parser.set_optional<std::string>("-", "function", "Run the subtraction function as a singleshot");
    parser.set_optional<std::string>("*", "function", "Run the multiplacation function as a singleshot");
    parser.set_optional<std::string>("/", "function", "Run the division function as a singleshot");
    parser.set_optional<std::string>("s", "function", "Run the square function as a singleshot");
    parser.set_optional<std::string>("h", "function", "Run the hypotenuse function as a singleshot");
    parser.set_optional<std::string>("d", "function", "Run the distance function as a singleshot");
    parser.set_optional<std::string>("m", "function", "Run the midpoint formula function as a singleshot");
    parser.set_optional<std::string>("qf", "function", "Run the quadratic formula function as a singleshot");
    parser.run_and_exit_if_error();
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
    return 0;
}
