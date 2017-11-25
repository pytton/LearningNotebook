//casting an integer to char


#include <conio.h>
#include <iostream>
#include <iomanip> //for setprecision
#include <fstream>	//for ofstream out("order.out");
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */

#include <Windows.h>

#include <string>


void waitforuserend();

int main()
{
	using namespace std;

	ofstream file1("text.txt");
	ofstream file2("text2.txt");

	for (int i = 0; i < 15; i++)
	{
		string name = "name";
		char label[3] = "";

		_snprintf_s(label, _TRUNCATE, "\n%d", i);
//		sprintf(label, "%d", i); //casting int value as char * label
								 //std::cout << label << std::endl;

		name = name + label + ".txt";
		file1 << name;
		file2 << label;
	}

	file1.close();
	file2.close();


	//waitforuserend();
}