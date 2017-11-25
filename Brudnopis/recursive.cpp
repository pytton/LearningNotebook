#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


//this doesn't work:
double recursive(int number, double value){

//	double value = val;
//	int count = number;
	double fraction = 1.0;

	if (number <= 0) return value;
	
		number--;
		fraction = 1.0 / (2*number);
		value = value + fraction;
		recursive(number, value);
}


double addingFractions(int count){

	double result = 1;

	for (int a = 1; a <= count; a++)
	{
		result = result + (1.0 / (pow(2.0, a)));
	}
	return result;
}

int main()
{
	cout << "Test" << endl;

	int number;
	cin >> number;

	double result;
	//result = recursive(number, 1);

	result = addingFractions(number);
	//cout << std::fixed;
	//cout << setprecision(4);
	cout << endl << "Result: " << result << endl;

	int a;
	cin >> a;
	return 0;
}