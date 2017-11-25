#include <iostream>

#include <string>
#include <set>
#include <algorithm>
#include <iterator>
#include <unordered_set>
#include <vector>


int main()
{
	using namespace std;

	unordered_set<string> myset = { "red", "green", "blue" };
	unordered_set<string>::const_iterator itr = myset.find("green"); //O(1)
//	if (itr != myset.end())
//		cout << *itr << endl;
	myset.insert("yellow"); //O(1)
	myset.insert("yellow");
	myset.insert("red");

	myset.erase("yellow");

	vector<string> vec = { "purple" , "pink" };
	myset.insert(vec.begin(), vec.end());

//	myset.clear();

	for (string name : myset)
	{
		cout << name << endl;
	}

	cout << "printing finished" << endl;


	//std::set<std::string> s;
	//std::cout << "Adding 'Hello' and 'World' to the set twice" << std::endl;

	//s.insert("Hello");
	//s.insert("World");
	//s.insert("Hello");
	//s.insert("World");
	//s.insert("a");
	//s.insert("b");
	//s.insert("c");
	//s.insert("B");
	//s.insert("F");
	//s.insert("Z");

	//s.begin();

	//set<std::string>::iterator itr1 = s.begin();
	//set<std::string>::iterator itr2 = s.end();


	//for (string name : s)
	//{
	//	cout << name << endl;
	//}

	//cout << endl;

	////	sort(itr1, itr2);

	////for (string name : s)
	////{
	////	cout << name << endl;
	////}


	////s.erase("Hello");

	//std::cout << "Set contains:";
	//while (!s.empty()) {
	//	std::cout << ' ' << *s.begin();
	//	s.erase(s.begin());
	//}


	int aaa;
	cin >> aaa;
	return 0;
}