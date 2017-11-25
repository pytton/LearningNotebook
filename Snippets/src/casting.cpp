//casting an integer to char


#include <conio.h>
#include <iostream>
#include <iomanip> //for setprecision
#include <fstream>	//for ofstream out("order.out");
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */

#include <Windows.h>

#include <string>


void waitforuserend();
//{
//	using namespace std;
//	cin.clear();
//	cin.ignore(255, '\n');
//	cin.get();
//}

int main()
{
	using namespace std;
	string basic = "name";
	string addon = "something";
	string result = "";
	char addition = '1';
	int counter = 1;

	for (int i = 0; i < 100; i++)
	{
		char label[2] = "";
		sprintf(label, "%d", i); //casting int value as char * label

		std::cout << label << std::endl;

	}


	waitforuserend();
}