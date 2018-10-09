//Sam Vernaza
//C+ Practice Ch 3

/*The purpose of this program is to create a reference for size of variables
using the CPP compiler on my Macbook Pro's compiler */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Testing bulit in C++ types" << endl;

	cout << "Sizeof char: " << sizeof(char) << " bytes." << endl;
	cout << "Sizeof bool: " << sizeof(bool) << " bytes." << endl;
	cout << "Sizeof long: " << sizeof(long) << " bytes." << endl;
	cout << "Sizeof long long: " << sizeof (long long) << " bytes." << endl;

	cout << "Sizeof unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	cout << "Sizeof unsigned short int: " << sizeof(unsigned short) << " bytes." << endl;
	cout << "Sizeof short int: " << sizeof(short) << " bytes." << endl;
	cout << "Sizeof unsigned long: " << sizeof(unsigned long) << " bytes." << endl;
	cout << "Sizeof int: " << sizeof(int) << " bytes." << endl;

	cout << "Sizeof float: " << sizeof(float) << " bytes." << endl;
	cout << "Sizeof double: " << sizeof(double) << " bytes." << endl;
	cout << "Sizeof unsigned int: " << sizeof(unsigned int) << " bytes." << endl;

	return 0;
}
