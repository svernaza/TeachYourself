//Samuel Vernaza
//Refresher on df:1
//Overloading functions
//adapted examjple from Sam's TeachYourself C++

#include <iostream>
using namespace std;

double PI = 3.14159; //constant
double Area(double radius); //area for circle
double Area(double radius, double height); //area for cylinder

int main()
{
	double radius = 0;
	char response = 'c';
	cout << "This program returns the area of a circle or a cylinder..." << endl;
	cout << "Enter 'c' for circle and 'z' for cylinder" << endl;
	cin >> response;
	response = toupper(response);

	if(response == 'Z')
	{
		double height = 0;
		cout << "What is the radius of this cylinder?" << endl;
		cin >> radius;
		cout << "How tall is this cylinder?" << endl;
		cin >> height;
		cout << "Area of cylinder is: " << Area(radius, height) << endl;
	}
	else
	{
		cout << "What is the radius of this circle?" << endl;
		cin >> radius;
		cout << "Area of the circle is: " << Area(radius) << endl;
	}
	return 0;
}

double Area(double radius)
{
	return (PI * (radius * radius));
}

double Area(double radius, double height)
{
	return (2 * Area(radius) + 2 * PI * radius * height);
}

