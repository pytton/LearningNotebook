//https://www.youtube.com/watch?v=LL8wkskDlbs

#include <iostream>
#include <thread>
using namespace std;

//void function_1() {
//	std::cout << "Beauty is only skin-deep" << std::endl;
//}
//
//int main(int argc, char* argv[]) {
//	std::thread t1(function_1);	//t1 starts running
//	//t1.join();	//main thread waits for t1 to finish
//	t1.detach();	//t1 will run freely on its own - daemon process
//
//				//...
//
//	if (t1.joinable()) t1.join();	//once you detach a thread, you cannot re-join it
//
//
//	return 0;
//}

/*
If threads are sharing a common resource (eg std::cout) then the parent thread should live as long as the child thread is accessing that resource.
You can join or detach a thread only once. You cannot join a thread that has been detached.
A thread should be joined or detached only once.
If you detach a child thread and the main thread ends before the the child thread - the child thread will continue running. This is called a daemon process. It might continue running until system shutdown.

*/