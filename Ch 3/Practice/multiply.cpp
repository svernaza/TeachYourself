//Sam Vernaza
//C++ Practice and Review
//Multiplication practice using variables wth initialization
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
	cout << "This program will multiply two numbers!" << endl;
	cout << "Please enter your first number: " << endl;
	int NumOne = 0;
	cin >> NumOne;
	cin.ignore(100, '\n');

	cout << "Please enter your second number: " << endl;
	int NumTwo = 0;
	cin >> NumTwo;
	cin.ignore(100, '\n');

	cout << NumOne << " x " << NumTwo << " is: " << NumOne * NumTwo << endl;
	cout << "exiting..." << endl;
	return 0;
}
