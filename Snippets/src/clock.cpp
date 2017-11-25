/* clock example: frequency of primes */
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
#include <iostream>

//#include <Windows.h>



int frequency_of_primes(int n) {
	int i, j;
	int freq = n - 1;
	for (i = 2; i <= n; ++i) for (j = sqrt(i); j>1; --j) if (i%j == 0) { --freq; break; }
	return freq;
}

int main()
{

	int howManyToSearch = 10000000;
	std::cout << "Enter how many numbers do you want me to search for primes in: " << std::endl;
	try
	{
		std::cin >> howManyToSearch;
	}
	catch (const std::exception&)
	{
		std::cout << "Input error. Searching for " << howManyToSearch << " numbers" << std::endl;
	}

	clock_t t;
	int f;
	t = clock();
	
	std::cout << "Finding out how many prime numbers there are in the first " << howManyToSearch << std::endl;

	f = frequency_of_primes(howManyToSearch);
	t = clock() - t;

	printf("It took me %d clicks (%f seconds).\n", t, ((float)t) / CLOCKS_PER_SEC);
	printf("I searched %d numbers and found %d prime numbers in that range.\n", howManyToSearch, f);
	int aaa;
	std::cin >> aaa;
	return 0;
}