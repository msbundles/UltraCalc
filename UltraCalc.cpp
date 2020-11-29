#include <cmath>
#include <iostream>
#include <string>
//Checking if we are on Linux or windows, and including the appropriate things.
#if defined(__unix__)
#include <unistd.h>
#define _USE_MATH_DEFINES
#else
#include "includes/wingetopt/src/getopt.c"
#define M_PI 3.14159265358979323846
#endif


//Function selection char
std::string symbol;
//Boolean for the loop
bool loop = true;
//Globals for the input strings, you could do it either way but this is less lines
std::string in1;
std::string in2;

//Utility functions

//Returns the value of pi if the user inputs the string "pi"
std::string returnPi(std::string in)
{
	std::string pi = std::to_string(M_PI);
	if (in == "pi") {
		return pi;
	} else
		return in;
}

//Arithmetic functions

//Addition function
void add()
{
	try {
		std::cout << "What is the first addend? ";
		std::cin >> in1;
		std::cout << "What is the second addend? ";
		std::cin >> in2;
		double in1d = stod(returnPi(in1));
		double in2d = stod(returnPi(in2));
		std::cout << "The result is: " << in1d + in2d << std::endl;
	}
	//Catching out of range errors and handling them
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	//Catching invalid argument errors and handling them
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Subtraction function
void sub()
{
	try {
		std::cout << "What is the minuend? ";
		std::cin >> in1;
		std::cout << "What is the subtrahend? ";
		std::cin >> in2;
		double in1d = stod(returnPi(in1));
		double in2d = stod(returnPi(in2));
		std::cout << "The result is: " << in1d - in2d << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Division function
void div()
{
	try {
		std::cout << "What is the dividend? ";
		std::cin >> in1;
		std::cout << "What is the divisor? ";
		std::cin >> in2;
		double in1d = stod(returnPi(in1));
		double in2d = stod(returnPi(in2));
		std::cout << "The result is: " << in1d / in2d << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Multiplication function
void mul()
{
	try {
		std::cout << "What is the first factor? ";
		std::cin >> in1;
		std::cout << "What is the second factor? ";
		std::cin >> in2;
		double in1d = stod(returnPi(in1));
		double in2d = stod(returnPi(in2));
		std::cout << "The result is: " << in1d * in2d << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Square root function
void sqr()
{
	try {
		std::cout << "What would you like to find the square root of? ";
		std::cin >> in1;
		double in1d = stod(returnPi(in1));
		std::cout << "The result is: " << sqrt(in1d) << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Hypotenuse function
void hypote()
{
	try {
		std::cout << "Input the legs of a right triangle in order to find the hypotenuse\n";
		std::cout << "Leg 1: ";
		std::cin >> in1;
		std::cout << "Leg 2: ";
		std::cin >> in2;
		double in1d = stod(returnPi(in1));
		double in2d = stod(returnPi(in2));
		std::cout << "The hypotenuse is " << hypot(in1d, in2d) << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Distance function
void dist()
{
	try {
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
		double x1d = stod(returnPi(x1));
		double x2d = stod(returnPi(x2));
		double y1d = stod(returnPi(y1));
		double y2d = stod(returnPi(y2));
		double x = x2d - x1d;
		double y = y2d - y1d;
		std::cout << "The distance between the points is " << sqrt(pow(x, 2) + pow(y, 2)) << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Midpoint formula function
void mid()
{
	try {
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
		double x1d = stod(returnPi(x1));
		double x2d = stod(returnPi(x2));
		double y1d = stod(returnPi(y1));
		double y2d = stod(returnPi(y2));
		double x = x1d + x2d;
		double y = y1d + y2d;
		std::cout << "The the midpoint of the line segment is " << x / 2 << "," << y / 2 << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Quadratic formula function
void quad()
{
	try {
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
		double ad = stod(returnPi(a));
		double bd = stod(returnPi(b));
		double cd = stod(returnPi(c));
		double discrim = sqrt((pow(bd, 2)) - (4 * (ad * cd)));
		double x1 = ((bd * -1) + discrim) / (ad * 2);
		double x2 = ((bd * -1) - discrim) / (ad * 2);
		std::cout << "Your first solution is " << x1 << std::endl;
		std::cout << "Your second solution is " << x2 << std::endl;
	}
	catch (std::out_of_range) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Interactive mode
void interactive()
{
	 /*
	   Loop that takes user input and runs math functions accordingly.
	   The loop repeats if the user wants to make another calculation,
	   and exits if they want to do something else.
	 */
	while (loop) {
		//Getting user choice of function
		std::cout << "Type q to quit\n"
			  << "Type + to add\n"
			  << "Type - to subtract\n"
			  << "Type * to multiply\n"
			  << "Type / to divide\n"
			  << "Type s for square root\n"
			  << "Type h for hypotenuse\n"
			  << "Type d for distance formula\n"
			  << "Type m for midpoint formula\n"
			  << "Type qf for quadratic formula\n"
			  << "What would you like to do? ";
		std::cin >> symbol;
		//Comparing the input string to determine desired function
		if (symbol == "+") {
			try {
				add();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "-") {
			try {
				sub();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "*") {
			try {
				mul();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "/") {
			try {
				div();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "s") {
			try {
				sqr();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "h") {
			try {
				hypote();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "d") {
			try
			{
				dist();
			}
			catch (std::out_of_range)
			{
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument)
			{
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "m") {
			try {
				mid();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "qf") {
			try {
				quad();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "q") {
			break;
		} else {
			//Input protection
			std::cout << "Your input is not recognized, please try again.\n";
			continue;
		}
		//Allowing for multiple calculations in a single session
		std::string q;
		std::cout << "Would you like to make another calculation (y/n)? ";
		std::cin >> q;
		if (q == "y") {
			loop = true;
		} else {
			loop = false;
		}
	}
}

//CLI Functions
/*
  CLI argument associations
  -h = help
  -a = add
  -s = subtract
  -p = multiply
  -/ = divide
  -r = square root
  -d = distance formula
  -m = midpoint formula
  -q = quadratic formula
  -i = interactive mode
*/

void printHelp()
{
	std::cerr << "Usage: "
		  << "ultracalc"
		  << " <option>\n"
		  << "Options:\n"
		  << "\t-h\tShow this help message\n"
		  << "\t-a\tAdd\n"
		  << "\t-s\tSubtract\n"
		  << "\t-p\tMultiply\n"
		  << "\t-/\tDivide\n"
		  << "\t-r\tSquare root\n"
		  << "\t-y\tHypotenuse\n"
		  << "\t-d\tDistance formula\n"
		  << "\t-m\tMidpoint formula\n"
		  << "\t-q\tQuadratic formula\n"
		  << "\t-i\tInteractive mode\n"
		  << "Replace a normal number input for 'pi'\nin order to utilize pi in your calculations.\n";
}

int main(int argc, char *argv[])
{
//Parsing command line options
	switch (getopt(argc, argv, "asp/rhdmqiy")) {
	case 'a':
		add();
		return 0;
		break;
	case 's':
		sub();
		return 0;
		break;
	case 'p':
		mul();
		return 0;
		break;
	case '/':
		div();
		return 0;
		break;
	case 'r':
		sqr();
		return 0;
		break;
	case 'y':
		hypote();
		return 0;
		break;
	case 'd':
		dist();
		return 0;
		break;
	case 'm':
		mid();
		return 0;
		break;
	case 'q':
		quad();
		return 0;
		break;
	case 'i':
		interactive();
		return 0;
		break;
	case 'h':
		printHelp();
		return 0;
		break;
	}
	printHelp();
	return 0;
}

