//Samuel Vernaza
//Vector practice taken from Sam's Teach Yourself C++

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//declare a vector array of type int
	std::vector<int> DynArrNums (3);
	DynArrNums[0] = 123;
	DynArrNums[1] = 432;
	DynArrNums[2] = 789;

	//add a new number to the vector
	cout << "Number of ints in array: " << DynArrNums.size() << endl;
	cout << "Enter another number for the array" << endl;
	int NewNum = 0;
	cin >> NewNum;
	DynArrNums.push_back(NewNum);

	//add a new number to the vector
	cout << "Num of ints in the array: " << DynArrNums.size() << endl;
	cout << "Last element in the array: " << DynArrNums.size() << endl;
	cout << DynArrNums[DynArrNums.size() - 1] << endl;

	return 0;
}
