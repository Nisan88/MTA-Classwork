#include <iostream>
using namespace std;

/*
Name: Nisan88
Last Updated: 26/10/2018
*/

//This program requests 2 numbers from the user as input and then and prints out their product.

void main()
{
	int firstNum, secondNum;

	cout << "Please input a number: ";
	cin >> firstNum;

	cout << "Please input another number: ";
	cin >> secondNum;

	cout << "The product of these numbers is: " << firstNum * secondNum << endl;
}