//Samuel Vernaza
//Using the concepts from Sam's Teach Yourself C++
//Potentially at a later time I will fix the bug in this?
//Removal of the first word of the second string  during each concatentation


#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string Greetings ("Hello std::string!");
	cout << Greetings << endl;

	cout << "Enter a line of text: " << endl;
	string FirstLine;
	getline(cin, FirstLine);

	cout << "Enter another: " << endl;
	string SecLine;
	cin >> SecLine;
	getline(cin, SecLine);

	cout << "Result of concatenation: " << endl;
	string Concat = FirstLine + SecLine;
	cout << Concat << endl;

	cout << "Making a copy of the concatenation..." << endl;
	string Copy;
	Copy = Concat;
	cout << "Copy is: " << Copy << endl;

	cout << "Length of the concatenation: " << Concat.length() << endl; 


	return 0;
}
