//Samuel Vernaza
//Ternary Operator Program
//Adapted from Sam's Teach Yourself C++


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int Num1 = 0;
	int Num2 = 0;

	cout << "Enter two ints: " << endl;
	cin >> Num1;
	cin >> Num2;

	int Max = (Num1 > Num2)? Num1 : Num2;
	cout << "The greater of " << Num1 <<  " and " \
	<< Num2 << " is: " << Max << endl;

	return 0;
}
