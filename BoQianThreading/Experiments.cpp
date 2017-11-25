
#include <time.h>
#include <iostream>

#include <thread>
#include <Windows.h>

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////
//void function_1() {
//	std::cout << "Beauty is only skin-deep" << std::endl;
//}
//
//int main(int argc, char* argv[]) {
//	std::thread t1(function_1);//t1 starts running
//	//t1.join();	//main thread waits for t1 to finish
//	t1.detach();	//t1 will run freely on its own - daemon process
//
//					//...
//
//	if (t1.joinable()) t1.join();	//once you detach a thread, you cannot re-join it
////	Sleep(3000);
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////
//EXPERIMENTS:
//
//#include <iostream>
//#include <thread>
//#include <Windows.h>
//using namespace std;
//
//void function1()
//{
//	for (int i = 0; i < 10; ++i) {
//		Sleep(1000);
//		cout << "Thread 1 Prints" << endl;
//	}
//}
//
//void threadFunction()
//{
//	std::thread t1(function1);
//	t1.detach();
//	Sleep(2000);
//	cout << endl << "Thread launch function sleep ends" << endl;
//}
//
//int main()
//{
//	//	std::thread t1(function1);
//	cout << "Hello World!" << std::thread::hardware_concurrency() << endl;
//	threadFunction();
//	Sleep(15000);
//	cout << "Main Thread ends." << endl;
//
//	Sleep(1000);
//
//	return 0;
//}







