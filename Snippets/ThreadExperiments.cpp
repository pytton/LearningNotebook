//
//#include <time.h>
//#include <iostream>
//
//#include <thread>
//
////using namespace std;
//
////void function_1() {
////	std::cout << "Beauty is only skin-deep" << std::endl;
////}
////
////int main(int argc, char* argv[]) {
////	std::thread t1(function_1);	//t1 starts running
////	t1.join();	//main thread waits for t1 to finish
////				//t1.detach();	//t1 will run freely on its own - daemon process
////
////				//...
////
////	if (t1.joinable()) t1.join();	//once you detach a thread, you cannot re-join it
////	return 0;
////}
//
//
//////////////////////////////////////////////////////////////////////////////////////////
////BELOW VIDEO 1:
//
//using namespace std;
//
//void function_1() {
//	std::cout << "Beauty is only skin-deep" << std::endl;
//}
//
//int main(int argc, char* argv[]) {
//	std::thread t1(function_1);	//t1 starts running
//	t1.join();	//main thread waits for t1 to finish
//	//t1.detach();	//t1 will run freely on its own - daemon process
//
//	//...
//
//	if (t1.joinable()) t1.join();	//once you detach a thread, you cannot re-join it
//	return 0;
//}
//
//////////////////////////////////////////////////////////////////////////////////////////
////EXPERIMENTS:
//
////#include <iostream>
////#include <thread>
////#include <Windows.h>
////using namespace std;
////
////void function1()
////{
////	for (int i = 0; i < 10; ++i) {
////		Sleep(1000);
////		cout << "Thread 1 Prints" << endl;
////	}
////}
////
////void threadFunction()
////{
////	std::thread t1(function1);
////	t1.detach();
////	Sleep(2000);
////	cout << endl << "Thread launch function sleep ends" << endl;
////}
////
////int main()
////{
////	//	std::thread t1(function1);
////	cout << "Hello World!" << std::thread::hardware_concurrency() << endl;
////	threadFunction();
////	Sleep(5000);
////
////
////
////	return 0;
////}
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////
////BEFORE YOUTUBE VIDEOS:
//
////class MikeSimulator;
////std::string UTCTime();
////
//////void MikeCallback(void* p)
//////{
//////	using namespace std;
//////	cout << setprecision(15) << "\nXXXXXXX MAIN CALLBACKXXXXXXXXXX " << UTCTime() << endl;
//////	Fl::repeat_timeout(1.0, MikeCallback);
//////}
////
////int mikesimulator();
////
////using namespace std;
////
////int main(int argc, char* argv[]) {
////
////	//const int SCREEN_WIDTH = 800;
////	//const int SCREEN_HEIGHT = 600;
////
////	//if (SDL_Init(SDL_INIT_VIDEO) < 0) {
////	//	cout << "SDL init failed." << endl;
////	//	return 1;
////	//}
////
////	//SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
////	//	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
////	//	SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
////
////	//if (window == NULL) {
////	//	SDL_Quit();
////	//	return 2;
////	//}
////
////	//bool quit = false;
////
////	//SDL_Event event;
////
////	//while (!quit) {
////	//	// Update particles
////	//	// Draw particles
////	//	// Check for messages/events
////
////	//	while (SDL_PollEvent(&event)) {
////	//		if (event.type == SDL_QUIT) {
////	//			quit = true;
////	//		}
////	//	}
////	//}
////
////	//SDL_DestroyWindow(window);
////	//SDL_Quit();
////
////	mikesimulator();
////
////	return 0;
////}
////
////int mikesimulator()
////{
////	int starting_bid = 20415;
////	//std::cin >> starting_bid;
////	MikeSimulator * mikesimulator = new MikeSimulator(starting_bid);
////
//////	MikeSimulator mikesimulator(starting_bid);
////
//////	Fl::add_timeout(1.0, MikeCallback/*, (void*)mikesimulator*/);
////
////	return Fl::run();
////
////
////}