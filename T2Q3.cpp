#include <iostream>
using namespace std;

/*
Name: Nisan88
Last Update: 11/11/2018
*/

//This program receives an input of 4 binary digits separated by spaces starting with 0, output is the number in binary form.

int main()
{
	int outputNum, bin1, bin2, bin3;
	cout << "Please input four binary digits separated by spaces (first digit being zero): ";
	cin >> bin3; //since the first digit is 0 we can probably ignore it, as it wont affect the conversion
	cin >> bin3;
	cin >> bin2;
	cin >> bin1;
	outputNum = bin3*4 + bin2 * 2 + bin1;
	cout << "The number in decimal is: " << outputNum << endl;
}