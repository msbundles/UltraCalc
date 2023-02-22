#include <cmath>
#include <iostream>
#include <string>
#include <unistd.h>
#define _USE_MATH_DEFINES

//Avagadro's number
const double mole = 6.02214076*pow(10,23);
//The var that stores the last answer.
double answer = 0;

//Utility functions

//This function injects a number into a equation if a certian string is given.
std::string valueInjector(std::string in)
{
	std::string pi = std::to_string(M_PI);
	if (in == "pi") {
		return pi;
	} else if (in == "mole") {
		return std::to_string(mole);
	} else if (in == "ans") {
		return std::to_string(answer);
	} else {
		return in;
	}
}

//Arithmetic functions

//Addition function
double add()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the first addend? ";
		std::cin >> in1;
		std::cout << "What is the second addend? ";
		std::cin >> in2;
		double in1d = stod(valueInjector(in1));
		double in2d = stod(valueInjector(in2));
		double result = in1d + in2d;
		std::cout << "The result is: " << result << std::endl;
		return result;
	}
	//Catching out of range errors and handling them
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	//Catching invalid argument errors and handling them
	catch (std::invalid_argument const&) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Subtraction function
double sub()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the minuend? ";
		std::cin >> in1;
		std::cout << "What is the subtrahend? ";
		std::cin >> in2;
		double in1d = stod(valueInjector(in1));
		double in2d = stod(valueInjector(in2));
		double result = in1d - in2d;
		std::cout << "The result is: " << result << std::endl;
		return result;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}


//Division function
double div()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the dividend? ";
		std::cin >> in1;
		std::cout << "What is the divisor? ";
		std::cin >> in2;
		double in1d = stod(valueInjector(in1));
		double in2d = stod(valueInjector(in2));
		double result = in1d/in2d;
		std::cout << "The result is: " << result << std::endl;
		return result;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Multiplication function
double mul()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the first factor? ";
		std::cin >> in1;
		std::cout << "What is the second factor? ";
		std::cin >> in2;
		double in1d = stod(valueInjector(in1));
		double in2d = stod(valueInjector(in2));
		double result = in1d*in2d;
		std::cout << "The result is: " << result << std::endl;
		return result;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Secondary math functions

//Square root function
double sqr()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What would you like to find the square root of? ";
		std::cin >> in1;
		double in1d = stod(valueInjector(in1));
		std::cout << "The result is: " << sqrt(in1d) << std::endl;
		return sqrt(in1d);
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Hypotenuse function
double hypote()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "Input the legs of a right triangle in order to find the hypotenuse\n";
		std::cout << "Leg 1: ";
		std::cin >> in1;
		std::cout << "Leg 2: ";
		std::cin >> in2;
		double in1d = stod(valueInjector(in1));
		double in2d = stod(valueInjector(in2));
		std::cout << "The hypotenuse is " << hypot(in1d, in2d) << std::endl;
		return hypot(in1d, in2d);
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//Distance function
double dist()
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
		double x1d = stod(valueInjector(x1));
		double x2d = stod(valueInjector(x2));
		double y1d = stod(valueInjector(y1));
		double y2d = stod(valueInjector(y2));
		double x = x2d - x1d;
		double y = y2d - y1d;
		double result = sqrt(pow(x, 2) + pow(y, 2));
		std::cout << "The distance between the points is " << result << std::endl;
		return result;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
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
		double x1d = stod(valueInjector(x1));
		double x2d = stod(valueInjector(x2));
		double y1d = stod(valueInjector(y1));
		double y2d = stod(valueInjector(y2));
		double x = x1d + x2d;
		double y = y1d + y2d;
		std::cout << "The the midpoint of the line segment is " << x / 2 << "," << y / 2 << std::endl;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
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
		double ad = stod(valueInjector(a));
		double bd = stod(valueInjector(b));
		double cd = stod(valueInjector(c));
		double discrim = sqrt((pow(bd, 2)) - (4 * (ad * cd)));
		double x1 = ((bd * -1) + discrim) / (ad * 2);
		double x2 = ((bd * -1) - discrim) / (ad * 2);
		std::cout << "Your first solution is " << x1 << std::endl;
		std::cout << "Your second solution is " << x2 << std::endl;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
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
		double in1d = stod(valueInjector(in1));
		double in2d = stod(valueInjector(in2));
		std::cout << "The top end of your range is: " << in1d + in2d << std::endl;
		std::cout << "The bottom end of your range is: " << fabs(in1d - in2d) << std::endl;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
		std::cout << "Your input contains letters or unknown symbols please try again.\n";
		exit(EXIT_FAILURE);
	}
}

//A function to find the third interior angle of a triangle when given
//the other two angles.
double thirdangle()
{
	std::string in1;
	std::string in2;
	try {
		std::cout << "What is the measure of your first angle? ";
		std::cin >> in1;
		std::cout << "What is the measure of your second angle? ";
		std::cin >> in2;
		double in1d = stod(valueInjector(in1));
		double in2d = stod(valueInjector(in2));
		double sub = in1d + in2d;
		double result = fabs(sub - 180);
		std::cout << "The third angle of your triangle is: " << result << std::endl;
		return result;
	}
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	catch (std::invalid_argument const&) {
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
		double in2d = stod(valueInjector(in2));
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
	catch (std::out_of_range const&) {
		std::cout << "Your input was too large, please try again.\n";
		exit(EXIT_FAILURE);
	}
	//Catching invalid argument errors and handling them
	catch (std::invalid_argument const&) {
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

        //Function selection string
	std::string symbol;

	while (true) {

	  std::cerr << R"""( | Symbol           | Function                   |
 |------------------+----------------------------|
 | q                | Quit                       |
 | +                | Add                        |
 | -                | Subtract                   |
 | *                | Multiply                   |
 | /                | Divide                     |
 | s                | Square Root                |
 | h                | Hypotenuse                 |
 | d                | Distance Formula           |
 | m                | Midpoint Formula           |
 | qf               | Quadratic Formula          |
 | tr               | Triangle Side Length Range |
 | ta               | Third Angle of Triangle    |
 | tc               | Temperature Conversion     |
 
 If you would like to use scientific notation in your calculations
 then use an e. An example would be, 6*10^11, would be 6e11
 Input your function: )""";
	  
		std::cin >> symbol;

                //Comparing the input string to determine desired function
		if (symbol == "+") {
			answer = add();
		} else if (symbol == "-") {
			answer = sub();
		} else if (symbol == "*") {
			answer = mul();
		} else if (symbol == "/") {
			answer = div();
		} else if (symbol == "s") {
			answer = sqr();
		} else if (symbol == "h") {
			answer = hypote();
		} else if (symbol == "d") {
			answer = dist();
		} else if (symbol == "m") {
			mid();
		} else if (symbol == "qf") {
			quad();
		} else if (symbol == "tr") {
			trirange();
		} else if (symbol == "ta") {
			answer = thirdangle();
		} else if (symbol == "tc") {
			tempconvert();
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
		if (q != "y") {
			break;
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
  | -i     | Interactive 
*/
/*
  | Symbol | Function                  |
  |--------+---------------------------|
  | +      | Add                       |
  | -      | Subtract                  |
  | *      | Multiply                  |
  | /      | Divide                    |
  | s      | Square Root               |
  | h      | Hypotenuse                |
  | d      | Distance Formula          |
  | m      | Midpoint Formula          |
  | qf     | Quadratic Formula         |
  | tr     | Triangle Sidelength Range |
  | ta     | Third Triangle Angle      |
  | tc     | Tempature Conversion      |
  If you would like to use scientific notation in your calculations
  then use an e. An example would be, 6*10^11, would be 6e11
  What would you like to do?
*/
 
//Prints the help info
void printHelp()
{
  std::cerr << R"""( | Letter | Function                   |
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
)""";
}

//The main function were command line arguments are parsed.
int main(int argc, char *argv[])
{
  
//Parsing command line options
	switch (getopt(argc, argv, "asp/rhdmqiyntoc")) {
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
