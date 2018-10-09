//Samuel Vernaza
//Sam's Teach Yourself Code Along


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//display the elements of a 2D array
int main()
{
	int Multi[2][3] = {{1, 2, 3}, {4, 5, 6}};

	cout << "Row 0: " << Multi[0][0] << " " \
					  << Multi[0][1] << " " \
					  << Multi[0][2] << endl;

	cout << "Row 1: " << Multi[1][0] << " " \
					  << Multi[1][1] << " " \
					  << Multi[1][2] << endl;
	cout << "Ending..." << endl;

	return 0;
}
