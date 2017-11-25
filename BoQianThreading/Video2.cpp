//https://www.youtube.com/watch?v=f2nMqNj7vxE&t=10s#t=195.6568137

//NOTES:

//	std::thread t1(function_1); //t1 starts running

////If the child thread t1 is destroyed before it is joined or detached - then the program (parent thread?) will terminate
////You have to make a decision if you want to join or detach t1 before t1 goes out of scope!

//If parent thread creates a child thread, and the parent thread throws an exception before the child thread is joined to or detached from the parent thread - the child thread will be destroyed.
//Solution: wrap parent thread in try{//……}catch(…){t1.join();throw;} block. Or use RAII - Resource acquisition is initialization approach

////	std::thread t1(fct); //t1 starts running
//	//std::thread funcThread (Fctor());//this is wrong - this creates a function. Complicated. Pointer to function?
//	std::thread t1((Fctor()));//this is correct way to do it - parantheses. creates a Fctor class and passes it as a parameter to thread t1.

//PARAMETER PASSED TO THREAD IS ALWAYS PASSED BY VALUE, EVEN IF YOU TRY TO PASS IT BY REFERENCE:
//std::thread t1((Fctor()), s);//this will pass by value! not by reference even though: void operator()(string & msg)
//to pass a parameter by reference, it has to be done explicitly:
//std::thread t1((Fctor()), std::ref(s));

////A thread can only be moved, it cannot be copied. This will not work:
//std::thread t1((Fctor()), s);
//std::thread t2 = t1;
//instead, this has to be done:
//std::thread t2 = std::move(t1);

////Each thread has an ID number associated with it. To print it out:
//cout << std::this_thread::get_id() << endl;
//cout << t1.get_id() << endl;

////Oversubscription is more threads running than available cores. Bad - degrades performance
//int a = std::thread::hardware_concurrency();//tells how many threads machine can support




//#include <iostream>
//#include <thread>
//#include <string>
//using namespace std;
//
//void function_1()
//{
//	std::cout << "Beauty is only skin-deep" << std::endl;
//}


////In this situation:
//
//int main()
//{
//	std::thread t1(function_1); //t1 starts running
//
//	return 0;
//}
//
////If the child thread t1 is destroyed before it is joined or detached - then the program (parent thread?) will terminate
////You have to make a decision if you want to join or detach t1 before t1 goes out of scope!
//



////In this situation:
//
//int main()
//{
//	std::thread t1(function_1); //t1 starts running
//
//	for (int i = 0; i < 100; ++i)
//		cout << "from main: " << i << endl;//if this throws an exception before t1 is joined, then t1 will be destroyed
//	
//	t1.join();
//
//	return 0;
//}
//If parent thread creates a child thread, and the parent thread throws an exception before the child thread is joined to or detached from the parent thread - the child thread will be destroyed.
//Solution: wrap parent thread in try{//……}catch(…){t1.join();throw;} block. Or use RAII - Resource acquisition is initialization approach

//int main()
//{
//	std::thread t1(function_1); //t1 starts running
//
//	try 
//	{
//		for (int i = 0; i < 100; ++i)
//			cout << "from main: " << i << endl;//if this throws an exception before t1 is joined, then t1 will be destroyed
//	}
//	catch (...) 
//	{
//		t1.join();
//		throw;
//	}
//	
//	t1.join();
//
//	return 0;
//}

//Using RAII - Resource Acquisition Is Initialization:

//class Fctor {
//public:
//	void operator()() {
//		for (int i = 0; i > -100; i--)
//		{
//			cout << "from t1: " << i << endl;
//		}
//	}
//};
//
//int main()
//{
//	Fctor fct;
//	
////	std::thread t1(fct); //t1 starts running
//	//std::thread funcThread (Fctor());//this is wrong - this creates a function. Complicated. Pointer to function?
//	std::thread t1((Fctor()));//this is correct way to do it - parantheses. creates a Fctor class and passes it as a parameter to thread t1.
//	
//	//using RAII
//	//Wrapper x(t1)
//
//
//
//	try
//	{
//		for (int i = 0; i < 100; ++i)
//			cout << "from main: " << i << endl;//if this throws an exception before t1 is joined, then t1 will be destroyed
//	}
//	catch (...)
//	{
//		t1.join();
//		throw;
//	}
//
//	t1.join();
//
//	return 0;
//}



//class Fctor {
//public:
//	void operator()(string msg) {
//	//	for (int i = 0; i > -100; i--)
//		{
//			cout << "t1 says: " << msg << endl;
//		}
//	}
//};
//
//int main()
//{
//	string s = "Where there is no trust, there is no love";
//
//	std::thread t1((Fctor()), s);
//
//
//
//
//	try
//	{
//		//for (int i = 0; i < 100; ++i)
//			cout << "from main: " << s << endl;//if this throws an exception before t1 is joined, then t1 will be destroyed
//	}
//	catch (...)
//	{
//		t1.join();
//		throw;
//	}
//
//	t1.join();
//
//	return 0;
//}



//PARAMETER PASSED TO THREAD IS ALWAYS PASSED BY VALUE, EVEN IF YOU TRY TO PASS IT BY REFERENCE:

//class Fctor {
//public:
//	void operator()(string & msg) {
//		
//		{
//			cout << "t1 says: " << msg << endl;
//			msg = "Trust is the mother of deceit";
//		}
//	}
//};
//
//int main()
//{
//	string s = "Where there is no trust, there is no love";
//
//	//std::thread t1((Fctor()), s);//this will pass by value! not by reference even though: void operator()(string & msg)
//
//	//to pass a parameter by reference, it has to be done explicitly:
//
//	std::thread t1((Fctor()), std::ref(s));
//
//	t1.join();
//		cout << "from main: " << s << endl;
//
//
//
//	return 0;
//}



//class Fctor {
//public:
//	void operator()(string & msg) {
//
//		{
//			cout << "t1 says: " << msg << endl;
//			msg = "Trust is the mother of deceit";
//		}
//	}
//};
//
//int main()
//{
//	string s = "Where there is no trust, there is no love";
//
//	std::thread t1((Fctor()), std::move(s));
//
//	//Each thread has an ID number associated with it. To print it out:
//	cout << std::this_thread::get_id() << endl;
//	cout << t1.get_id() << endl;
//
//	std::thread t2 = std::move(t1);
//	t2.join();
////	cout << "from main: " << s << endl;
//
//
//
//	return 0;
//}



////////////////////////////////////////////////////////////////////////////

//class Fctor {
//public:
//	void operator()(string & msg) {
//
//		{
//			cout << "t1 says: " << msg << endl;
//			msg = "Trust is the mother of deceit";
//		}
//	}
//};
//
//int main()
//{
//	//Oversubscription is more threads running than available cores. Bad - degrades performance
//	int a = std::thread::hardware_concurrency();//tells how many threads machine can support
//
//	cout << endl << a << endl;
//
//	return 0;
//}