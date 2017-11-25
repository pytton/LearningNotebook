//demonstration of using MikeTimer.h


#include "MikeTimer.h"

int main()
{
//	using namespace Mike;
	using namespace std;

	Mike::Timer timer;

	//timer.reset();
	
	
	cout << "Starting..." << endl;

	int aaa;
	cin >> aaa;

	cout << "something" << endl << endl;

//	timer.print();

	long b;
	b = timer.elapsed();

	cout << "I took " << b << " miliseconds" << endl;


		int a;
		cin >> a;

		cout << "something" << endl;



}