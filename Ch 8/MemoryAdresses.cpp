//Samuel Vernaza
//Code Review and code snippets adjusted from Sam's TeachYourself C++

#include <iostream>
using namespace std;

/*
 This simple program will demonstrate random memory address values
 It also uses pointer to grab values at memory addresses
*/
int main()
{
	int *pInt = NULL;
	char *pChar = NULL;

	int num = 400;
	char name[] = "Samuel";

	pInt = &num;
	pChar = name;

	cout << "The memory address of num is: " << &num << endl;
	cout << "The memory address of the starting index of name is: " << &name << endl;
	cout << "The value of num is: " << *pInt << endl;
	cout << "The value of the first location of name is: " << *pChar << endl;

	return 0;
}
