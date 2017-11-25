class Something
{
private:
	int m_value1;
	double m_value2;
	int *m_value3;

public:
	Something() : m_value1(0), m_value2(0.0), m_value3(0) // Implicitly initialize our member variables
	{
		// No need for assignment here
	}
};