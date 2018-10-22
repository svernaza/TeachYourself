//Samuel Vernaza
//Practicing functions fundamentals


#include <iostream>
using namespace std;

//prototypes
int multiply(int i, int j);

int main()
{
	int i = 0;
	int j = 0;
	int result = 0;

	cout << "Enter two numbers that you would like to have multiplied: " << endl;

	cin >> i;
	cin.ignore();
	cin >> j;
	cin.ignore();

	cout << "Result is: " << (result = multiply(i, j)) << endl; 
	cout << "Done! " << endl;

	return 0;
}

int multiply(int i, int j)
{
	return (i * j);
}
