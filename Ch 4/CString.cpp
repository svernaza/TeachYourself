//Samuel Vernaza
//C string review Sam's Teach Yourself

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//defining a string literal
	char str[] = {'H', 'e', 'l', 'l', 'o', '!'};
	cout << "Your string may contain garbage: " << str << endl;
	cout << "Size of str: " << sizeof(str) << endl;
	cout << "Replacing ! with a null..." << endl;
	str[5] = '\0';
	cout << "String is now: " << str << endl;
	cout << "---------------------------" << endl;

	//allowing literal declaration of a string variable type
	char str2[] = "Hello, World!";
	cout << "String literal declaration is: " << str2 << endl;
	cout << "String literal value at location 3: " << str2[2] << endl;
	cout << "---------------------------" << endl;
	cout << "Done!!" << endl;
	return 0;
}
