/*-------------------------------------------------------------------------------------------
 *
 *File name:	main.cpp
 *Author:	Seth Peterson
 *Project:	Area, Volume, and Perimeter Calculator for Common Shapes
 *Description:  This program will calculate the area, volume, and/or perimeter of a user chosen shape based on input values.
 *Date:         March 16, 2017
 * ---------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
	char cycle = 'N';
	int shapeChoice = 0;
	
	double a = 0.000;
	double b = 0.000;
	double c = 0.000;    //these will be used for calculations
	double d = 0.000;
	double e = 0.000;

cout << "\n\n\nWelcome to the Area, Volume, and Perimeter Calculator for Common Shapes!\n";

while (cycle == 'N' || cycle == 'n')
{
	cout << "\nAvaliable shapes:\n1)  Square\n2)  Rectangle\n3)  Triangle\n4)  Parallelogram\n5)  Trapezoid\n6)  Circle\n7)  Circular Ring\n8)  Sphere\n9)  Cube\n10) Rectangular Box\n11) Cylinder\n12) Right Circular Cone\nChoice: ";
	cin >> shapeChoice;

	while(shapeChoice < 1 || shapeChoice > 12)
	{
		cout << "\nError: invalid choice. Please try again.\nChoice: ";
		cin >> shapeChoice;
	}
	/////////////////////////////////////////////////////////////////////////////////////
	cout << "\n\n";
	if(shapeChoice == 1)
	{
		cout << "SQUARE\n";
		cout << "Side length: ";
		cin >> a;
		cout << "Area = " << a*a << '\n';
		cout << "Perimeter = " << 4*a;
	}
	if(shapeChoice == 2)
	{
		cout << "RECTANGLE\n";
		cout << "Side length 1: ";
		cin >> a;
		cout << "Side length 2: ";
		cin >> b;
		cout << "Area = " << a*b << '\n';
		cout << "Perimeter = " << 2*a + 2*b;
	}
	if(shapeChoice == 3)
	{
		cout << "TRIANGLE\n";
		cout << "Base: ";
		cin >> a;
		cout << "Height: ";
		cin >> b;
		cout << "Area = " << .5*a*b;
	}
	if(shapeChoice == 4)
	{
		cout << "PARALLELOGRAM\n";
		cout << "Height: ";
		cin >> a;
		cout << "Side length 1 (perpendicular to height): ";
		cin >> b;
		cout << "Side length 2: ";
		cin >> c;
		cout << "Area = " << a*b << '\n';
		cout << "Perimeter = " << 2*b + 2*c;
	}
	if(shapeChoice == 5)
	{
		cout << "TRAPEZOID\n";
		cout << "Base: ";
		cin >> a;
		cout << "Top: ";
		cin >> b;
		cout << "Height (perpendicular to base): ";
		cin >> c;
		cout << "Side length 1: ";
		cin >> d;
		cout << "Side length 2: ";
		cin >> e;
		cout << "Area = " << c*((a+b)/2) << '\n';
		cout << "Perimeter = " << a+b+d+e;
	}
	if(shapeChoice == 6)
	{
		cout << "CIRCLE\n";
		cout << "Radius: ";
		cin >> a;
		cout << "Area = " << 3.1416*2*a << '\n';
		cout << "Circumference = " << 3.1416*a*a;
	}
	if(shapeChoice == 7)
	{
		cout << "CIRCULAR RING\n";
		cout << "Outer radius: ";
		cin >> a;
		cout << "Inner radius: ";
		cin >> b;
		cout << "Area = " << 3.1416*(a*a-b*b);
	}
	if(shapeChoice == 8)
	{
		cout << "SPHERE\n";
		cout << "Radius: ";
		cin >> a;
		cout << "Surface area = " << 4*3.1416*a*a << '\n';
		cout << "Volume = " << (4*3.1416*a*a*a)/3;
	}
	if(shapeChoice == 9)
	{
		cout << "CUBE\n";
		cout << "Side length: ";
		cin >> a;
		cout << "Surface area = " << 6*a*a << '\n';
		cout << "Volume = " << a*a*a;
	}
	if(shapeChoice == 10)
	{
		cout << "RECTANGULAR BOX\n";
		cout << "Width: ";
		cin >> a;
		cout << "Length: ";
		cin >> b;
		cout << "Height: ";
		cin >> c;
		cout << "Surface area = " << 2*(a*b + a*c + b*c) << '\n';
		cout << "Volume = " << a*b*c;
	}
	if(shapeChoice == 11)
	{
		cout << "CYLINDER\n";
		cout << "Radius: ";
		cin >> a;
		cout << "Height: ";
		cin >> b;
		cout << "Surface area = " << 2*3.1416*a*(a+b) << '\n';
		cout << "Volume = " << 3.1416*a*a*b;
	}
	if(shapeChoice == 12)
	{
		cout << "RIGHT CIRCULAR CONE\n";
		cout << "Radius: ";
		cin >> a;
		cout << "Height: ";
		cin >> b;
		cout << "Side length: ";
		cin >> c;
		cout << "Surface area = " << 3.1416*a*(a+c) << '\n';
		cout << "Volume = " << .3333*3.1416*a*a*b;
	}
	/////////////////////////////////////////////////////////////////////////////////////
	cout << "\n\nWould you like to quit?\n(y/n): ";
	cin >> cycle;
	while(cycle != 'Y' && cycle != 'y' && cycle != 'N' && cycle != 'n')
	{
		cout << "\nError: invalid choice. Please try again.\n(y/n): ";	
		cin >> cycle;
	}
	cout << "\n\n\n\n\n\t-Seth Peterson-\n\n";
}
}
# PersonalProjects
# PersonalProjects
