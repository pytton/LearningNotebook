#ifndef _MIKETIMER_INCLUDED_
#define _MIKETIMER_INCLUDED_

/******************************************************************************************************
simple timer class for measuring performance using the <time.h> library
has the following functions:
.reset - restarts the clock
.print - prints to console using cout the time elapsed from last .reset in miliseconds
.elapsed - returns a long which contains the time in miliseconds from when the last .reset was called
******************************************************************************************************/

#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <iostream>


namespace Mike {

	class Timer
	{
	public:
		Timer();

		void reset() 
		{
			start = clock();
			now = clock();
		}
		
		void print()
		{
			long tempnow = clock();
			long elapsedTime;
			elapsedTime = tempnow - start;

			std::cout << " Time elapsed: " << elapsedTime << std::endl;
		}

		long elapsed() 
		{
			now = clock();
			long elapsedTime;
			elapsedTime = now - start;

			return elapsedTime;
		}

	private:
		long start;
		long now;
	};

	Timer::Timer()
	{
		start = clock();
		now = clock();
	}
}



#endif // !_MIKETIMER_INCLUDED_
