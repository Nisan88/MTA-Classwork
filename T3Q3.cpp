#include <iostream>
#include <math.h>
using namespace std;

/*
Name: Nisan88
Last Updated: 30/11/2018
*/

//This program takes 3 integers for a,b and c, and solves ax^2+bx=c=0 for x.

int main() {
	int a, b, c;
	double x1, x2;
	cout << "Please enter three numbers A, B, C for the equation: ";
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == 0) //like q2, non quadratic formula, checking bx+c=0
	{
		if (b == 0 && c == 0) // checking 0=0
		{
			cout << "Infinite number of solutions\n";
		}
		else if (b == 0 && c != 0) //checking for no solutions i.e 6=0
		{
			cout << "No Solutions\n"; 
		}
		else // 
		{
			cout << "Only one solution: " << -c / float(b);
		}
	}
	else if ((b*b - 4 * a*c) < 0) //no solution sqrt cannot be negative
	{
		cout << "No Solutions\n";
	}
	else if ((b*b - 4 * a*c) == 0) // one solution, due to no +-
	{
		x1 = (-b) / double(2 * a);
		cout << "Only one solution:\n" << x1;
	}
	else // 2 solutions due to +-, one variable for each. 
	{
		x1 = (-b + sqrt(b*b - 4 * a*c)) / double(2 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / double(2 * a);
		cout << "Two solutions:\n" << x1 << " " << x2;
	}
}