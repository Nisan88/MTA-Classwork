#include <iostream>
using namespace std;

/*
Name: Nisan88
Last Updated: 30/11/2018
*/

//This program takes 2 pairs of numbers, each representing a fraction in the form of m/n and a/n and another input representing an operator.
//and prints out the result of combining the two fractions using the operator. once as a fraction, the other as a decimal fraction

int main() {
	int firstNominator, firstDenominator;
	int secondNominator, secondDenominator;
	int thirdNominator, thirdDenominator;
	bool opValid;
	char op;

	opValid = true; //initializing boolean value
	cout << "please enter the first fraction, nominator followed by a denominator: ";
//getting first set
	cin >> firstNominator;
	cin >> firstDenominator;
	if (firstDenominator != 0) { //checking if the denominator is not zero
		cout << "please enter the second fraction, nominator followed by a denominator: ";
//getting second set
		cin >> secondNominator;
		cin >> secondDenominator;
		if (secondDenominator != 0) { //checking if the denominator is not zero
			cout << "Please enter an operator: ";
			cin >> op;
			switch (op) //switch to treat each of the different operators
			{
			case '+':
				if (firstDenominator==secondDenominator) //check if denominators are equal, in which case no modification is needed on them
				{
					thirdDenominator = secondDenominator;
					thirdNominator = firstNominator + secondNominator;
					cout << "number is: ";
					cout << thirdNominator << " " << thirdDenominator << endl;
				}
				else
				{
					thirdDenominator = secondDenominator * firstDenominator;
					thirdNominator = firstNominator * secondDenominator + secondNominator * firstDenominator;
					cout << "number is: ";
					cout << thirdNominator << " " << thirdDenominator << endl;
				}
				break;
			case '-':
				if (firstDenominator == secondDenominator) //check if denominators are equal, in which case no modification is needed on them
				{
					thirdDenominator = secondDenominator;
					thirdNominator = firstNominator - secondNominator;
					cout << "number is: ";
					cout << thirdNominator << " " << thirdDenominator << endl;
				}
				else
				{
					thirdDenominator = secondDenominator * firstDenominator;
					thirdNominator = firstNominator * secondDenominator - secondNominator * firstDenominator;
					cout << "number is: ";
					cout << thirdNominator << " " << thirdDenominator << endl;
				}
				break;
			case '/':
				thirdNominator = firstNominator * secondDenominator;
				thirdDenominator = firstDenominator * secondNominator;
				cout << "number is: ";
				cout << thirdNominator << " " << thirdDenominator << endl;
				break;
			case '*':
				thirdNominator = firstNominator * secondNominator;
				thirdDenominator = firstDenominator * secondDenominator;
				cout << "number is: ";
				cout << thirdNominator << " " << thirdDenominator << endl;
				break;
			default:
				cout << "invalid operator entered\n";
				opValid = false; //set flag to indicate issue with operator input so we can skip calculating thirdnumber since we didnt make calculations over it
				break;
			}
			if (opValid)
			{
				cout << "the number in decimal fractions is: " << thirdNominator / float(thirdDenominator) << endl; //casting to fload to allow decimal fractions
			}
		}
		else
			cout << "denominator cannot be zero";
	}
	else
		cout << "denominator cannot be zero";
}