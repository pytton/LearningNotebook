// http://stackoverflow.com/questions/4754011/c-string-to-double-conversion


#include <string>
#include <conio.h>
#include <iostream>
#include <iomanip> //for setprecision
#include <fstream>	//for ofstream out("order.out");
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */

#include <Windows.h>


void StringToDouble(std::string Input, double &temporary, bool &error)	//accepts a string of any of these formats: 1.000522346874 ; 12566478 ; 00023668 ; 000263574.5489 ; 456.67;
{
	const char * c = Input.c_str();

	////////////////////
	////////////////////
	////////////////////
	//						THE SECRET IS HERE:
	// atof - all to float?
	// atoi - also works - all to int?

	temporary = atof(c);
	error = 0;

	//int myVal = atoi("66");
	//float myValDbl =	atof("66.55");		//windows compiler directly supports this????
}

void waitforuserend()
{
	using namespace std;
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
}


int main()
{
	using namespace std;
	string Input1;
	string Input2;
	cout << setprecision(15);

	cout << endl << "Please enter input1: ";
	cin >> Input1;
	cout << endl << "Please enter input2: ";
	cin >> Input2;

	bool error = 1;
	double temporary = 0;
	StringToDouble(Input1, temporary, error);

	double number1 = 0;
	if (error != 1)	number1 = temporary;

	StringToDouble(Input2, temporary, error);
	double number2 = 0;
	if (error != 1)	number2 = temporary;

	double result = 0;
	result = number1 * number2;
	cout << endl << "The result is: " << result;

	waitforuserend();
	return 0;
}