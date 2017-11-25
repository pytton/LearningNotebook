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
	
	
	
	for (int i = 0; i < 5; i++)
	{
		string name = "name";
		char label[2] = "";
		sprintf(label, "%d", i); //casting int value as char * label
		//std::cout << label << std::endl;

		name = name + label + ".txt";
		cout << name << endl;

		//ofstream name("text.txt");
		//ofstream name
	}

	


	waitforuserend();
}