#include <iostream>
using namespace std;

/*
Name: Nisan88
Last update: 07/12/2018
*/

/* 
This programes takes two inputs a and b, an integer n,
and a series of characters length of n.
The program then converts the numbers from base a to base b.
*/
int main()
{
	int baseFrom, baseTo, len, inputNum, i, sumNum, accNum;
	inputNum = 0;
	sumNum = 0;
	cout << "Please enter two numbers between two and ten: ";
	cin >> baseFrom >> baseTo ;
	cout << "Please enter a number n: ";
	cin >> len;
	cout << "please enter a number n digits long separated by spaces:";
	while (len>0) //getting from base baseFrom to base 10
	{
		cin >> inputNum;
		accNum = 1;
		for (i = 0; i < len-1; i++)
		{
			accNum *= baseFrom;
		}
		accNum *= inputNum;
		sumNum += accNum;
		len--;
	}
	cout << "the output is: ";
	while ((sumNum/baseTo)!=0)
	{
		cout << sumNum % baseTo<< ' ';
		sumNum = sumNum / baseTo;
	}
	cout << sumNum % baseTo;
}