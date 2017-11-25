/*

#include "stdafx.h"
#include <iostream>
#include <cstdio> // for rand() and srand() and time()
#include "time.h"
#include <chrono>
#include <thread>
#include <random>




void waitforuserend(); //require 'Enter' key press before program exit


void waitamoment(int miliseconds) // waits for amount of miliseconds defined by miliseconds
{
//#include <chrono>
//#include <thread>
	
	std::this_thread::sleep_for(std::chrono::milliseconds(miliseconds));
	/*
	using namespace std;

	long timer1 = 0, timer2 = 0;

	timer1 = time(0);
	//cout << "Starting countdown..." << endl;

	for (int iii = 0; iii < seconds; ++iii)
	{

		while (true)
		{
			timer2 = time(0);
			if (timer2 >(timer1 + iii)) break;
		}
		//cout << timer2 - timer1 << " seconds\n";
	}
	
}
*/

/*
int main()
{
	using namespace std;
	

	cout << "How many miliseconds should I wait? \n";
	int duration = 1;
	cin >> duration;

	//std::this_thread::sleep_for(std::chrono::milliseconds(int(duration * 1000)));

	waitamoment(duration);
	
	
	cout << "OK, done!";

	std::random_device rd;

	std::cout << "default random_device characteristics:" << std::endl;
	std::cout << "minimum: " << rd.min() << std::endl;
	std::cout << "maximum: " << rd.max() << std::endl;
	std::cout << "entropy: " << rd.entropy() << std::endl;
	std::cout << "a random number: " << rd() << std::endl;
	cout << "size of rd: " << sizeof(random_device);




	waitforuserend();
	return 0;
}




int main()
{
	using namespace std;
	
	
	// construct a trivial random generator engine from a time-based seed:
	//unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	//std::default_random_engine generator(seed);

	//std::normal_distribution<double> distribution(0.0, 1.0);

	//std::cout << "some Normal-distributed(0.0,1.0) results:" << std::endl;
	//for (int i = 0; i<10; ++i)
	//	std::cout << distribution(generator) << std::endl;



	
	const long ArraySize = 25000000;
	int RandomNumbers[ArraySize];
	long long start = 0, end = 0;
	const int nHigh = 10;
	const int nLow = 1;
	const int range = nHigh - nLow + 1;

	start = time(0);

	std::random_device rd;

	//srand(time(0)); // set initial seed value to time(0) needs to use rand() instead of rd in code below

	for (int nCount = 0; nCount < ArraySize; ++nCount)
	{
		RandomNumbers[nCount] = ((rd() % (nHigh - nLow + 1)) + nLow);
	}

	long Distribution[range] = { 0 };

	for (int nCount = 0; nCount < ArraySize; ++nCount)
	{
		for (int iii = 0; iii < range ; ++iii)
		{
			if (RandomNumbers[nCount] == iii + 1) Distribution[iii]++;
		}

	}
	

	for (int nCount = 0; nCount < ArraySize; ++nCount)
	cout << RandomNumbers[nCount];

	cout << endl << endl;

	for (int iii = 0; iii < range; ++iii)
	{
		cout << iii+1 << " \tHas occured: " << Distribution[iii] << " times." << endl;
	}

	

	end = time(0);

	cout << "start: " << start << endl << "end: " << end << endl;
	cout << "elapsed: " << end - start << endl;
	
	waitforuserend();
	return 0;
}


/*
int GetRandomNumber(int nLow, int nHigh)
{
return (rand() % (nHigh - nLow + 1)) + nLow;
}
*/



	/*

	// count how many spaces the user has entered
	int nSpaceCount = 0;

	// loop 80 times
	for (int nCount = 0; nCount < 80; nCount++)
	{
		char chChar = getchar(); // read a char from user

		// exit loop if user hits enter
		if (chChar == '\n')
			break;

		// increment count if user entered a space
		if (chChar == ' ')
			nSpaceCount++;
	}

	cout << "You typed " << nSpaceCount << " spaces" << endl;

	*/

	/*
	char chValue = 'a';
	while (chValue <= 'z')
	{
		cout << chValue << " " << int(chValue) << endl;
		chValue++;
	}
	*/

/*
		// Loop between 1 and 5
		int iii = 1;
		int jjj = 1;
		while (iii <= 9)
	{
		// loop between 1 and iii
		jjj = 1;
		while (jjj <= iii)
			cout << jjj++;

		// print a newline at the end of each row
		cout << endl;
		iii++;
	}
	*/


	/*
	int iii = 1;
	while (iii <= 50)
	{
		// print the number
		cout << iii << " ";

		// if the loop variable is divisible by 10, print a newline
		if (iii % 13 == 0)
			cout << endl;

		// increment the loop counter
		iii++;
	}

	*/


	
	/*


	int apples(5);

	if (apples >= 5)
	{ // nested block
		int apples(10); // hides previous variable named apples

		// apples now refers to the nested block apples
		// the outer block apples is hidden

		std::cout << apples;
	} // nested block apples destroyed

	// apples now refers to the outer block apples
	std::cout << apples;

	waitforuserend();
	return 0;
	*/




	/*
	cout << "Enter an integer: ";
	int value;
	cin >> value;

	if (value > 0)
	{// start of nested block
		cout << value << " is a positive integer" << endl;
		cout << "Double this number is " << value * 2 << endl;
		// end of nested block	
	}
	else
	{
		cout << value << " is a negative integer" << endl;
		cout << "The positive value of this nubmer is " << -value << endl;
	}



	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y;
	std::cin >> y;

	if (x == y)
		std::cout << x << " equals " << y << "\n";
	if (x != y)
		std::cout << x << " does not equal " << y << "\n";
	if (x > y)
		std::cout << x << " is greater than " << y << "\n";
	if (x < y)
		std::cout << x << " is less than " << y << "\n";
	if (x >= y)
		std::cout << x << " is greater than or equal to " << y << "\n";
	if (x <= y)
		std::cout << x << " is less than or equal to " << y << "\n";



	using namespace std;
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "long long:\t\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
	




	
		// count holds the current number to print
		int count = 1; // start at 1

		// Loop continually until we pass number 100
		while (count <= 100)
		{
			std::cout << count << " "; // print the current number

			// if count is evenly divisible by 20, print a new line
			if (count % 20 == 0)
				std::cout << "\n";

			count++; // go to next number
		} // end of while
	
	*/





//	std::cout << "First part\aSecond part";

	/*

	cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)

	char ch;
	cin >> ch; // ch = 'a', "bcd" is left queued.
	cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;

	// Note: The following cin doesn't ask the user for input, it grabs queued input!
	cin >> ch; // ch = 'b', "cd" is left queued.
	cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;
	*/



