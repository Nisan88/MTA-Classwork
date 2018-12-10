#include <iostream>
using namespace std;

/*
Name: Nisan88
Last Update: 11/11/2018
*/

//This program receives an input in base 8, the output is the number in base 3, with all leading zeroes.

int main()
{
	int base8dig1, base8dig2, base8dig3, base8, base10, b3dig1, b3dig2, b3dig3, b3dig4, b3dig5, b3dig6;
	cout << "Please input in base eight, the output is the number in base three: ";
//grabbing the three digits
	cin >> base8dig1;
	cin >> base8dig2;
	cin >> base8dig3;
//combimning them to base 8 under one variable
	base8 = base8dig1 * 100 + base8dig2 * 10 + base8dig3;
//starting to convert to base 10
	base10 = (base8 / 100)*8*8;
	base8 = base8 % 100;
	base10 = base10 + (base8 / 10) * 8;
	base8 = base8 % 10;
	base10=base10+base8;
//Here we have base8 converted to base10 and now we can start converting it to base 3 digit by digit.
	b3dig1 = base10 % 3;
	base10 = base10 / 3;
	b3dig2 = base10 % 3;
	base10 = base10 / 3;
	b3dig3 = base10 % 3;
	base10 = base10 / 3;
	b3dig4 = base10 % 3;
	base10 = base10 / 3;
	b3dig5 = base10 % 3;
	base10 = base10 / 3;
	b3dig6 = base10 % 3;
	cout << "The base eight number in base three is: " << endl;
	cout << b3dig6 << b3dig5 << b3dig4 << b3dig3 << b3dig2 << b3dig1 << endl;
}