//https://www.youtube.com/watch?v=_Sk9JT_gTV4

#include <iostream>
#include <memory>
using namespace std;


struct Stest
{
	int variable;
	Stest() { cout << "Construction" << endl; }
	~Stest() { cout << "Destruction" << endl; }
};

shared_ptr<Stest> func()
{
	//shared_ptr<Stest> Sp(new Stest);
	shared_ptr<Stest> Sp = make_shared<Stest>();	//same as above, but faster; recommended way of creating shared pointers
	return Sp;
}
int main()
{
	cout << "Enter main" << endl;

	shared_ptr<Stest> Spret = func();
	//shared pointer maintains a refrence count:
	cout << Spret.use_count() << endl;

	cout << "Exit main" << endl;
	//shared pointer is automatically destroyed when no one is using it anymore
	return 0;
}
