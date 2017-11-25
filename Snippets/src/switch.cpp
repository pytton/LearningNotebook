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
	for (int i = 0; i < 10; i++)
	{
		int Wait = 250;
		Sleep(Wait);
		cout << "sleeping for: " << Wait << " ms" << endl;
		string tempContract;
		int tickerId = 1;
		for (int i = 1; i < 4; i++) {		// iterate through contracts 1,2,3

			tickerId = i;
			switch (i) {
			case 1:
				tempContract = "First";
				break;
			case 2:
				tempContract = "Second";
				break;
			case 3:
				tempContract = "Third";
				break;
			}

			cout << tempContract << endl;

		}
	}
	waitforuserend();
}