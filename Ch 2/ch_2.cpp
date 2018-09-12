//Sam Vernaza
//Ch 2 Exercises
//09/12/18

//using variables, std::cout, std::cin, some array work as well
#include <iostream>
#include <cstring>

int main ()
{
	char temp [10];
	int InputNum = 0;

	std::cout << "Please enter your number." << std::endl;
	std::cin >> InputNum;
	std::cin.ignore();
	std::cout << std::endl;

	std::cout << "Please enter your name." << std::endl;
	std::cin.get(temp, 10, '\n');
	std::cin.ignore(100, '\n');

	std::cout << temp << " entered " << InputNum << std::endl;

	return 0;
}
