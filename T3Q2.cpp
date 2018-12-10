#include <iostream>
using namespace std;

/*
Name: Nisan88
Last Updated: 30/11/2018
*/

//This program takes 2 integers for a and b, and solves ax+b=0 for x.

int main() {
	int a, b;
	cout << "Please enter two numbers A and B for the equation: ";
	cin >> a;
	cin >> b;
	if (a!=0) //if a is not zero, theres a single solution
	{
		cout << "X equals " << -b / float(a);
	}
	else if (b==0) //a is 0, checking if b is also zero
	{
		cout << "Infinite number of solutions";
	}
	else //a is still zero, b is not zero, no solution
	{
		cout << "No Solutions";
	}
}