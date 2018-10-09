//Notes to accompany code from Sam's Teach Yourself C++ Ch. 4
/*
 This code is both modified content and my own implementations
 I do not intend to claim original authorship over it.
*/

//Managing Arrays and Strings
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Ch. 4 code and notes" << endl;
	cout << endl;

	//array declaration of 5 numbers
	int MyNumbers [5] = {0};

	//array initalization of the first two numbers
	int nums [5] = {36, 56};

	//constant array length declaration
	const int ARRAY_LENGTH = 5;
	int newNums [ARRAY_LENGTH] = {1, 2, 3, 4, 5};

	//initialization of an undetermined array list
	int finalNums [ARRAY_LENGTH] = {121, 234, 354, 456, 580};

	//determining an array size
	//bytes consumed by an array
	/*
	 * bytes consumed = sizeof(element-type) * Num of elements*/
	//a short program to declare an array of ints and access
	cout << "First element at [0]: " << finalNums[0] << endl;
	cout << "Second element at [1]: " << finalNums[1] << endl;
	cout << "Third element at [2]: " << finalNums[2] << endl;
	cout << "An so on..." << endl;
	cout << "-----------------------------------------" << endl;

	//program to alter contents of finalNums
	//intentionally didn't add error checking for time
	cout << "enter the index of the element to be changed: " ;
	int nElementIndex = 0;
	cin >> nElementIndex;

	cout << "Enter new value: ";
	cin >> finalNums[nElementIndex];
	cout << "updated..." << endl;

	cout << "Your new array values are: " << endl;
	int i = 0;
	while (i < ARRAY_LENGTH)
	{
		cout << "Element value at [" << i << "]: " << finalNums[i] << endl;
		++i;
	}

	return 0;
}
