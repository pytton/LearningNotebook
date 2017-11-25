#include <iostream>
#include <fstream>
#include <string>


class MarketData
{
public:
	std::string myTime;
	std::string bidSPY;
	std::string askSPY;
	std::string bidVolSPY;
	std::string askVolSPY;
	
};



int main()
{
	/*
	getline(where to store the extracted characters, how many characters should be taken unlles, seperator(delimiter)) - extracts seperators and delete it
	get(where to store the extracted characters, how many characters should be taken unlles, seperator(delimiter)) - doesn't extract seperator
	ignore(how_many_characters_to_extracte AND TO IGNORE THEM, seperator) - extracts characters

	get();
	*/

	using namespace std;
	
	
	
	
	
	fstream file;

	file.open("Sample2.txt", ios::in | ios::binary);

	if (file.is_open())
	{

		//char buffer[50];
		//char separator;
		char buf;
		char temp;
		string output;
		for (int i = 0; i < 350; ++i)
		{
			temp = file.get();
			if ((temp != ',') && (temp != '\n'))
			{
				buf = temp;
				cout << buf;
				output += buf;
			}
			if (temp == ',') { cout << " COMMA "; }
			if (temp == '\n') { cout << endl << endl << endl << " ENTER "; }
		}

		cout << endl << endl << endl << endl << "output string follows: " << endl;
		cout << output << endl;

	}
	else
		cout << "The file couldn't be opened properly" << endl;



	int a;

	cin >> a;
	return 0;
}


//// vector::push_back
//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> myvector;
//	int myint;
//
//	std::cout << "Please enter some integers (enter 0 to end):\n";
//
//	do {
//		std::cin >> myint;
//		myvector.push_back(myint);
//	} while (myint);
//
//	std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";
//
//	for (int i = 0; i < myvector.size(); ++i)
//	{
//		std::cout << myvector[i];
//	}
//
//	std::cin >> myint;
//	return 0;
//}