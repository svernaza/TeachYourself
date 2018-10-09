//Sam Vernaza
//09/21/18

/*Practicing the auto keyword and its uses*/
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	cout << "This program will prove the value of auto against the compiler." << endl;
	cout << endl;
	auto Flag = true;
	auto Num = 20000000;
	cout << "Flag = " << Flag;
	cout << " size of Flag is: " << sizeof(Flag) << endl;
	cout << endl;

	cout << "Num = " << Num;
	cout << " size of Num is: " << sizeof(Num) << endl;

	return 0;
}
