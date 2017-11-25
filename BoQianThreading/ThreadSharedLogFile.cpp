//https://www.youtube.com/watch?v=3ZxZPeXPaM4&index=2&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M#t=0.8330174

#include <iostream>
#include <thread>
#include <string>
#include <mutex>
#include <fstream>
using namespace std;




class LogFile {
	std::mutex m_mutex;
	ofstream f;
public:
	LogFile() {
		f.open("log.txt");
	}//needs a destructor
	~LogFile() {
		f.close();
	}
	void shared_print(string printout)
	{
		std::lock_guard<std::mutex> locker(m_mutex);	//RAII//exception safe
		f <<  printout <<  endl;
		cout <<  printout << endl;

	}
		void shared_print(string id, int value)
		{
			std::lock_guard<std::mutex> locker(m_mutex);	//RAII//exception safe
			f << "From: " << id << ": " <<  value << endl;
			cout << "From: " << id << ": " << value << endl;
			
		}
	//Never return f to the outside world
	ofstream& getSream() { return f; }
	//Never pass f as an argument to user provided function - this enables access to it outside of mutex
	void processf(void fun(ofstream&))
	{
		fun(f);
	}

};



void function_1(LogFile &log) {
	for (int i = 0; i > -100; i--)
	{
		log.shared_print("t1 says: ", i);
	}
}

int main()
{
	LogFile log;
	std::thread t1(function_1, std::ref(log)); //t1 starts running

	for (int i = 0; i < 100; ++i)
		log.shared_print("from main: ", i);//if this throws an exception before t1 is joined, then t1 will be destroyed

	t1.join();

	return 0;
}