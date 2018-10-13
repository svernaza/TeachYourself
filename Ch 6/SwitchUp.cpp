//Samuel Vernaza
//Using Switch Cases and Enum Types
//Adapted from Sam's Teach Yourself C++


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	enum PieTypes
	{
		Apple = 0,
		Cherry,
		Raspberry,
		Blackberry,
		Custard,
		Pumpkin,
	};


	cout << "Welcome to our random pie generator!" << endl;
	cout << "Enter a number (0-5) for a pie! " << endl;

	//initialization of pie type
	int Pie = Apple;
	cin >> Pie;

//technically having this loop will cause switch to never hit default case.
//Comment out the loop to test the default case
	while (Pie < 0 || Pie > 5)
	{
		cout << "Invalid! Try again! " << endl;
		cin >> Pie;
	}

	switch(Pie)
	{
	case Apple:
		cout << "Apple pie is delicious! " << endl;
		break;
	case Cherry:
		cout << "You lucked out with our cherry pie!" << endl;
		break;
	case Raspberry:
		cout << "Yum, Raspberry!" << endl;
		break;
	case Blackberry:
		cout << "OH Boy Blackbeeerrry!" << endl;
		break;
	case Custard:
		cout << "Not my favorite, but Custard...ok." <<endl;
		break;
	case Pumpkin:
		cout << "Tis the season, Pumpkin!" << endl;
		break;
	default:
		cout << "We can't all follow direction, try again!" << endl;
		break;
	}

	return 0;
}
