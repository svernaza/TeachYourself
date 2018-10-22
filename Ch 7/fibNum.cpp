//Samuel Vernaza
//Fib Recursive Program Fun


#include <iostream>
using namespace std;

//prototype
/*
 This function takes input from the user (index) and returns the resulting
 fibonacci sequence that would result from this index.
*/
int fibNum(int index);

int main()
{
	int index = 0;
	cout << "Please enter the index value to discover the Fibonacci value!" << endl;
	cin >> index;;
	cout << "The result is: " << fibNum(index) << endl;

	return 0;
}

int fibNum(int index)
{
	if(index < 2)
		return index;
	else
		return (fibNum(index - 1) + fibNum(index - 2));
}
