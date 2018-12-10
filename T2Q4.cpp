#include <iostream>
using namespace std;

/*
Name: Nisan88
Last Update: 11/11/2018
*/

//This program receives an input of 4 binary digits separated by spaces, output is the number in binary form.

int main()
{
	int outputNum, bin1, bin2, bin3, bin4;
	cout << "Please input four binary digits separated by spaces (first digit being one): ";
	cin >> bin4;
	cin >> bin3;
	cin >> bin2;
	cin >> bin1;
	outputNum = bin4 * 8 + bin3 * 4 + bin2 * 2 + bin1;
	outputNum = outputNum - 16;
	cout << "The number in decimal is: " << outputNum << endl;
}