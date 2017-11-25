#include <iostream>
#include <string>

class A
{
public:
	 virtual const char* getName() { return "A"; }
};

class B : public A
{
public:
	 const char* getName() { return "B"; }
};

class C : public B
{
public:
	 virtual const char* getName() { return "C"; }
};

class D : public C
{
public:
	virtual const char* getName() { return "D"; }
};

class Experiment {
private:
	A * pointer = NULL;
public:
	Experiment(A* ptr) {
		pointer = ptr;
	}

	void setpointer(A * ptr) { pointer = ptr; }
	A * getpointer() { return pointer; }
};


int main()
{
	using namespace std;
	B c;
	A &rBase = c;
	std::cout << "rBase is a " << rBase.getName() << '\n';

	int a;

	C * cTypeClass;

	B * bTypeClass;

	cTypeClass = new C();
	bTypeClass = new B();

	Experiment exp(bTypeClass);

	exp.setpointer(cTypeClass);
	
	char * name;

	cout << "Name: " << exp.getpointer()->getName();








	std::cin >> a;

	return 0;
}