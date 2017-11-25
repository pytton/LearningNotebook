#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <string>

void waitforuserend()
{
	using namespace std;
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
}


std::string UTCTime()
{
	char outstr[200];
	time_t t;
	struct tm *tmp;
	const char* fmt = "%a %d %b %y %T %z";

	std::string UTCTime;

	t = time(NULL);
	tmp = gmtime(&t);
	if (tmp == NULL) {
		UTCTime = "gmtime error";		
	}

	if (strftime(outstr, sizeof(outstr), fmt, tmp) == 0) {
		UTCTime = "strftime returned 0";
		
	}
	else strftime(outstr, sizeof(outstr), fmt, tmp);

	UTCTime = static_cast<std::string>(outstr);

	return UTCTime;

}



//		http://www.tutorialspoint.com/c_standard_library/c_function_strftime.htm - strftime()

int main() {
	
	std::cout << std::endl << UTCTime() << std::endl;

	waitforuserend();
	exit(EXIT_SUCCESS);	
}