//  https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in


using namespace std;

struct Person
{
	int age;
	double weight;
};

int main() {

	Person person;

	Person * ptrPerson;
	 
	ptrPerson = &person;

//	Person & refPerson = ptrPerson;



	return 0;
}