//Samuel Vernaza
//Simple program to play with the pre/post fix operators in C++
//Students who come across this feel free to use it for understanding!

#include <iostream>
using namespace std;

int main()
{
	int Num1 = 0;
	int Num2 = 0;

	cout << "Playing with prefix assignment first: " << endl;
	cout << "Num1 before single increment: " << Num1 << endl;
	cout << "Num2 before single increment: " << Num2 << endl;
	cout << "------------------------" << endl;

	cout << "Prefx increment of Num1: " << ++Num1 << endl;
	cout << "Num1 is now: " << Num1 << endl;
	cout << "-----------------------" << endl;

	cout << "Postfix assigment of Num1 to Num2: " << endl;
	Num2 = Num1++;
	cout << "Num 2 is now: " << Num2 << endl;
	cout << "Num1 after the postfix is now: " << Num1 << endl;
	cout << "-----------------------" << endl;

	cout << "Now a loop to demonstrate post-fix assignment" << endl;
	cout << "Num2 is assigned Num1's value before it's incremented" << endl;
	cout << endl;

	while (Num2 < 10)
	{
		cout << "Value of Num2 before: " << Num2 << endl;
		cout << "Value of Num1 before: " << Num1 << endl;
		cout << endl;
		Num2 = Num1++;

		cout << "Value of Num2 after: " << Num2 << endl;
		cout << "Value of Num1 after: " << Num1 << endl;
		cout << "---------------------" << endl;
	}

	cout << "Now a loop showing prefix assignment" << endl;
	cout << "Note that the values are always the same! " << endl;
	cout << endl;

	Num2 = Num1 = 0;
	while(Num2 < 10)
	{
		cout << "Value of Num2 before: " << Num2 << endl;
		cout << "Value of Num1 before: " << Num1 << endl;
		cout << endl;
		Num2 = ++Num1;

		cout << "Value of Num2 after: " << Num2 << endl;
		cout << "Value of Num1 after: " << Num1 << endl;
		cout << "---------------------" << endl;
	}

	cout << "Done!" << endl;

	return 0;
}
