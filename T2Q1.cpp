#include <iostream>
using namespace std;

/*
Name: Nisan88
Last Update: 11/11/2018
*/

//This program receives an input between 0 and 7 in decimal, converts it to binary and prints it using 4 digits.

int main()
{
	int inputNum, bin1, bin2, bin3, bin4;
	cout << "Please input a number between zero and seven: ";
	cin >> inputNum;
	cout << "The number in four bit binary is:" << endl;
	bin1=inputNum % 2;
	inputNum = inputNum / 2;
	bin2=inputNum % 2;
	inputNum = inputNum / 2;
	bin3=inputNum % 2;
	inputNum = inputNum / 2;
	bin4=inputNum % 2;
	cout << bin4 << bin3 << bin2 << bin1;
}