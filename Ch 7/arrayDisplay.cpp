//Samuel Vernaza
//Functions that take an array as an argument
//adapted from Sam's Teach Yourself C++

#include <iostream>
using namespace std;

void display(int numArray[], int length); //display array of nums
void display(char charArray[], int length);//display array of chars

int main()
{
	int numArray[] = {12, 45, 123, 654};
	char charArray[] = {'H', 'e', 'l', 'l', 'o', '\0'};

	cout << "Displaying nums: " << endl;
	display(numArray, 4);
	cout << "Displaying chars: " << endl;
	display(charArray, 5);
	cout << "Done!" << endl;

	return 0;
}

//Display an array of numbers using a while loop
void display(int numArray[], int length)
{
	int index = 0;
	while(index < length)
	{
		cout << "[" << numArray[index] << "]";
		index++;
	}
	cout << endl;
}

//Display an array of char using a for loop
//could have also implemented this using null as the terminating sequence
void display(char charArray[], int length)
{
	for(int index = 0; index < length; ++index)
		cout << charArray[index];
	cout << endl;
}
