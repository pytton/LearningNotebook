
#include <iostream>

#include <string>
#include <set>
#include <algorithm>
#include <iterator>
#include <unordered_set>
#include <vector>
#include "MikeTimer.h"



class Experiment {
public:
	void printId() {
		static int id = 0;
		using namespace std;
		cout << id << " Internal: " << internalId<< endl;
		id++;
		internalId++;
	}
	int internalId = 0;

};


int main()
{
	Experiment classone;
	Experiment classtwo;

	classone.printId();
	classone.printId();
	classone.printId();
	classone.printId();
	classone.printId();
	classone.printId();
	classone.printId();

	using namespace std;

	cout << "Class two: " << endl;

	classtwo.printId();
	classtwo.printId();
	classtwo.printId();
	classtwo.printId();

	cout << "Class one: " << endl;

	classone.printId();
	classone.printId();
	classone.printId();

	int a;
	cin >> a;
}

//
//int main()
//{
//	using namespace std;
//
//	vector <int> myvector;
//
//	cout << myvector.size() << endl;
//
//	myvector.push_back(34);
//	myvector.push_back(54);
//	myvector.push_back(54);
//	myvector.push_back(54);
//	myvector.push_back(54);
//	myvector.push_back(54);
//
//	
//
//
//	try {
//		int a, b = 0;
//		a = myvector.at(0);
//		b = myvector.at(5657);
//
//		cout << a << "   " << b << "   " << myvector.at(2) << endl;
//	}
//	catch (...) {
//		cout << "Exception thrown" << endl;
//	}
//
//
//
//
//	myvector.clear();
//
//
//	cout << myvector.size() << endl;
//
//	cout << "ending" << endl;
//
//
//	int aaa;
//
//	cin >> aaa;
//
//
//	return 0;
//}