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
//Planck's constant for use in wave energy equations
double planck = 6.626068*pow(10,-34);
//The speed of light for use in wave calculations
double speedoflight = 2.99792458*pow(10,8);

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
	std::string in1;
	std::string in2;
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
	std::string in1;
	std::string in2;
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
	std::string in1;
	std::string in2;
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
	std::string in1;
	std::string in2;
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

//Secondary math functions

//Square root function
void sqr()
{
	std::string in1;
	std::string in2;
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
	std::string in1;
	std::string in2;
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

//A function to find the range of side lengths of triangles given the
//two smallest sides.
void trirange()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the first smallest side? ";
		std::cin >> in1;
		std::cout << "What is the second smallest side? ";
		std::cin >> in2;
		double in1d = stod(returnPi(in1));
		double in2d = stod(returnPi(in2));
		std::cout << "The top end of your range is: " << in1d + in2d << std::endl;
		std::cout << "The bottom end of your range is: " << fabs(in1d - in2d) << std::endl;
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

//A function to find the third interior angle of a triangle when given
//the other two angles.
void thirdangle()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the measure of your first angle? ";
		std::cin >> in1;
		std::cout << "What is the measure of your second angle? ";
		std::cin >> in2;
		double in1d = stod(returnPi(in1));
		double in2d = stod(returnPi(in2));
		double sub = in1d + in2d;
		std::cout << "The third angle of your triangle is: " << fabs(sub - 180) << std::endl;
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

//Wave calculations

//Wavelength calculations

//A function to get the wavelength of a wave from the energy of the wave
void wlfromeng()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the energy of your wave? ";
		std::cin >> in1;
		double in1d = stod(returnPi(in1));
		double ans = (speedoflight*planck)/in1d;
		std::cout << "The wavelength of your wave is: " << ans << std::endl;
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

//A function to get the wavelength of a wave from the frequency of the wave
void wlfromfrq()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the frequency of your wave? ";
		std::cin >> in1;
		double in1d = stod(returnPi(in1));
		double ans = speedoflight/in1d;
		std::cout << "The wavelength of your wave is: " << ans << std::endl;
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

//Frequency calculations

//A function to get frequency from energy
void frqfromeng()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the energy of your wave? ";
		std::cin >> in1;
		double in1d = stod(returnPi(in1));
		double ans = in1d/planck;
		std::cout << "The frequency of your wave is: " << ans << std::endl;
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

//A function to get frequency from wavelength
void frqfromwl()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the wavelength of your wave? ";
		std::cin >> in1;
		double in1d = stod(returnPi(in1));
		double ans = speedoflight/in1d;
		std::cout << "The frequency of your wave is: " << ans << std::endl;
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

//Enegy calculations

//A function to get energy from wavelength
void engfromwl()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the wavelength of your wave? ";
		std::cin >> in1;
		double in1d = stod(returnPi(in1));
		double ans = (planck*speedoflight)/in1d;
		std::cout << "The energy of your wave is: " << ans << std::endl;
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

//A function to get energy from frequency
void engfromfrq()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the frequency of your wave? ";
		std::cin >> in1;
		double in1d = stod(returnPi(in1));
		double ans = planck*in1d;
		std::cout << "The energy of your wave is: " << ans << std::endl;
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

//A function to convert Fahrenheit to Celsius and visa versa

void tempconvert()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "Type fc to convert from Fahrenheit to Celsius.\n"
			  << "Type cf to convert from Celsius to Fahrenheit.\n"
                 	  << ":";
		std::cin >> in1;
		std::cout << "Please input the temp you would like to convert: ";
		std::cin >> in2;
		double in2d = stod(returnPi(in2));
		double out;
		if (in1 == "cf") {
			out = (in2d*1.8) + 32;
			std::cout << "The result is: " << out << " degrees Fahrenheit" << std::endl;
		} else if (in1 == "fc") {
			out = (in2d-32) / 1.8;
			std::cout << "The result is: " << out << " degrees Celsius" << std::endl;
		}
		
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

//Interactive mode
void interactive()
{
	 /*
	   The loop that takes user input and runs math functions
	   accordingly. The loop repeats if the user wants to make
	   another calculation, and exits if they want to do something
	   else.
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
			  << "Type tr for triangle side-length range\n"
			  << "Type ta for the third angle of a triangle\n"
			  << "Type we for energy to wavelength\n"
			  << "Type wf for frequency to wavelength\n"
			  << "Type fe for energy to frequency\n"
			  << "Type fw for wavelength to frequency\n"
             		  << "Type ew for wavelength to energy\n"
		          << "Type ef for frequency to energy\n"
			  << "Type tc for temperature conversion\n"
                          << "All units for wave calculations are in meters and hertz\n"
			  << "If you would like to use scientific notation in your calculations\n"
			  << "then use an e. An example would be, 6*10^11, would be 6e11\n"
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
		} else if (symbol == "tr") {
			try {
				trirange();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "ta") {
			try {
				thirdangle();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			} 
		} else if (symbol == "we") {
			try {
				wlfromeng();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "wf") {
			try {
				wlfromfrq();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "fe") {
			try {
				frqfromeng();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "fw") {
			try {
				frqfromwl();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "ew") {
			try {
				engfromwl();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "ef") {
			try {
				engfromfrq();
			}
			catch (std::out_of_range) {
				std::cout << "Your input was too large, please try again.\n";
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Your input contains letters or unknown symbols please try again.\n";
				continue;
			}
		} else if (symbol == "tc") {
			try {
				tempconvert();
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
  | Letter | Function                   |
  |--------+----------------------------|
  | -h     | Help                       |
  | -a     | Add                        |
  | -s     | Subtract                   |
  | -p     | Multiply                   |
  | -/     | Divide                     |
  | -r     | Square Root                |
  | -y     | Hypotenuse                 |
  | -d     | Distance Formula           |
  | -m     | Midpoint Formula           |
  | -q     | Quadratic Formula          |
  | -n     | Third angle of a triangle  |
  | -t     | Triangle side-length range |
  | -e     | Energy to wavelength       |
  | -f     | Frequency to wavelength    |
  | -g     | Energy to frequency        |
  | -j     | Wavelength to frequency    |
  | -k     | Wavelength to energy       |
  | -l     | Frequency to energy        |
  | -c     | Temperature conversion     |
  | -i     | Interactive mode           |
*/

//Prints the help info
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
		  << "\t-n\tThird angle of a triangle\n"
		  << "\t-t\tTriangle side-length range\n"
		  << "\t-e\tEnergy to wavelength\n"
		  << "\t-f\tFrequency to wavelength\n"
		  << "\t-g\tEnergy to frequency\n"
		  << "\t-j\tWavelength to frequency\n"
		  << "\t-k\tWavelength to energy\n"
		  << "\t-l\tFrequency to energy\n"
		  << "\t-c\tTemperature conversion\n"
		  << "\t-i\tInteractive mode\n"
		  << "All units for wave calculations are in meters and hertz\n"
		  << "If you would like to use scientific notation in your calculations\n"
		  << "then use an e. An example would be, 6*10^11, would be 6e11.\n"
		  << "Replace a normal number input for 'pi'\nin order to utilize pi in your calculations.\n";
}

//The main function were command line arguments are parsed.
int main(int argc, char *argv[])
{
//Parsing command line options
	switch (getopt(argc, argv, "asp/rhdmqiyntefgjkloc")) {
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
	case 'n':
		thirdangle();
		return 0;
		break;
	case 't':
		trirange();
		return 0;
		break;
	case 'e':
		wlfromeng();
		return 0;
		break;
	case 'f':
		wlfromfrq();
		return 0;
		break;
	case 'g':
		frqfromeng();
		return 0;
		break;
	case 'j':
		frqfromwl();
		return 0;
		break;
	case 'k':
		engfromwl();
		return 0;
		break;
	case 'l':
		engfromfrq();
		return 0;
		break;
	case 'c':
		tempconvert();
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

