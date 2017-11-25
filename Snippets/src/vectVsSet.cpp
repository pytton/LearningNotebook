//	WHICH IS FASTER FOR WHAT: VECTOR, SET, UNORDERED SET


#include <iostream>

#include <string>
#include <set>
#include <algorithm>
#include <iterator>
#include <unordered_set>
#include <vector>
#include "MikeTimer.h"


int GetRandomNumber(int nLow, int nHigh)
{
return (rand() % (nHigh - nLow + 1)) + nLow;
}




int main()
{
	using namespace std;
	using namespace Mike;

	vector <int> originvector;	//stores original set of random numbers

	const long sizeofDataset = 500000;

	int myarray[sizeofDataset];


	vector<int> myvector;
	set <int> myset;
	unordered_set<int> myunordered;

	myvector.clear();
	myset.clear();
	myunordered.clear();

	Timer timer;

	for (int i = 0; i < sizeofDataset; i++)
	{
		myarray[i] = GetRandomNumber(0,sizeofDataset);
	}


	//first populate all three with 1000 000 random numbers:
	//need to modify Visual Studio setting to increase stack size:
	//Linker->System->Stack Reserve Size

	timer.reset();

	for (int i = 0; i < sizeofDataset; i++)
	{
		myvector.push_back(myarray[i]);
	}
	cout << "Filling vector took: " << timer.elapsed() << endl;

	timer.reset();
	for (int i = 0; i < sizeofDataset; i++)
	{
		myset.insert(myarray[i]);
	
	}
	cout << "Filling set took: " << timer.elapsed() << endl;

	timer.reset();
	for (int i = 0; i < sizeofDataset; i++)
	{
		myunordered.insert(myarray[i]);
	}
	cout << "Filling unordered set took: " << timer.elapsed() << endl;

	//timing sequential access of all three:
	
	timer.reset();
	for (int i : myvector)
	{
		int result = i + 123;
	}
	cout << "Vector sequential access time: " << timer.elapsed() << endl;

	timer.reset();
	for (int i : myset)
	{
		int result = i + 123;
	}
	cout << "Set sequential access time: " << timer.elapsed() << endl;

	timer.reset();
	for (int i : myunordered)
	{
		int result = i + 123;
	}
	cout << "Unordered Set sequential access time: " << timer.elapsed() << endl;

/*

	RESULTS:

	Filling vector took : 1264
	Filling set took : 9762
	Filling unordered set took : 4665
	Vector sequential access time : 393
	Set sequential access time : 23
	Unordered Set sequential access time : 13
*/


	int aaa;
	cin >> aaa;
	return 0;


	//unordered_set<string> myset = { "red", "green", "blue" };
	//unordered_set<string>::const_iterator itr = myset.find("green"); //O(1)
	//																 //	if (itr != myset.end())
	//																 //		cout << *itr << endl;
	//myset.insert("yellow"); //O(1)
	//myset.insert("yellow");
	//myset.insert("red");

	//myset.erase("yellow");

	//vector<string> vec = { "purple" , "pink" };
	//myset.insert(vec.begin(), vec.end());

	////	myset.clear();

	//for (string name : myset)
	//{
	//	cout << name << endl;
	//	cout << "Random number: " << GetRandomNumber(0, 1000) << endl;
	//}

	//cout << "printing finished" << endl;


	////std::set<std::string> s;
	////std::cout << "Adding 'Hello' and 'World' to the set twice" << std::endl;

	////s.insert("Hello");
	////s.insert("World");
	////s.insert("Hello");
	////s.insert("World");
	////s.insert("a");
	////s.insert("b");
	////s.insert("c");
	////s.insert("B");
	////s.insert("F");
	////s.insert("Z");

	////s.begin();

	////set<std::string>::iterator itr1 = s.begin();
	////set<std::string>::iterator itr2 = s.end();


	////for (string name : s)
	////{
	////	cout << name << endl;
	////}

	////cout << endl;

	//////	sort(itr1, itr2);

	//////for (string name : s)
	//////{
	//////	cout << name << endl;
	//////}


	//////s.erase("Hello");

	////std::cout << "Set contains:";
	////while (!s.empty()) {
	////	std::cout << ' ' << *s.begin();
	////	s.erase(s.begin());
	////}


}