//http://stackoverflow.com/questions/356950/c-functors-and-their-uses

#include <iostream>
using namespace std;

//// this is a functor
struct add_x {
	add_x(int x = 15) : x(x) {}
//	add_x() { x = 0; }
	int operator()(int y)  { return x + y; }
	int operator()() { return x; }

private:
	int x =0;
};
//
//int main()
//{
//	add_x add15(1000);
//
//
//	cout << "State: " << add15(0) << endl << "Add 10: " << add15(10) << endl << "Add 3: " << add15(3) << endl
//		<< "Add 0: " << add15(0) << endl;
//
//	return 0;
//}

// this is a functor
//struct add_x {
//	add_x(int x) : x(x) {}
//	int operator()(int y)  { x = x + y; return x; }
//
//private:
//	int x=0;
//};

int main()
{
	add_x add15(10);


//	cout << "State: " << add15() << endl;
	cout << "Add 10: " << add15(10) << endl;
	cout << "Add 3: " << add15(3) << endl;
	cout << "Add 0: " << add15(0) << endl;
	cout << "Add 43: " << add15(43) << endl;

	return 0;
}