#include <random>
#include <iostream>
#include <mutex>

namespace Mike {
	struct SimpRandom
	{
		std::mutex m_mutex;
		double SimpRandom::get() {
			return (*distrib)((*mersenne));
		}
		void SimpRandom::newSeed() {
			std::lock_guard<std::mutex> locker(m_mutex);
			int seed = (*rd)();
			delete mersenne;
			mersenne = new std::mt19937(seed);
		}
		

		std::random_device * rd;
		std::mt19937 * mersenne;
		std::uniform_real_distribution<double> * distrib;
		SimpRandom(double from, double to) {
			rd = new std::random_device;
			int seed = (*rd)();
			mersenne= new std::mt19937(seed);
			distrib = new std::uniform_real_distribution<double> (from, to);
		}
		~SimpRandom() {
			delete rd;
			delete mersenne;
			delete distrib;
		}
	};
}


int main() {

	Mike::SimpRandom m_random(0,1000);

	for (int i = 0; i < 16; ++i) {
		std::cout << m_random.get() << "\n";
	}

	m_random.newSeed();

	for (int i = 0; i < 16; ++i) {
		std::cout << m_random.get() << "\n";
	}
}

