#include <iostream>
using namespace std;

/*
Name: Nisan88
Last update: 08/12/2018
*/

/*
The program takes a number, either in binary or decimal
converts it from one to the other depending on the users choice
*/
int main()
{
	int inputLen, inputNum, outputNum,i,compBin, powAcc, powInc,j;
	bool was_first_one = false, isNeg=false;
	char isBin;
	outputNum = 0;
	cout << "Please enter a natural number larger than one: ";
	cin >> inputLen;
	cout << " Please enter a char, either 'f' or 't': ";
	cin >> isBin;
	if (isBin=='f')
	{
		cout << "Please Enter a whole number: ";
		cin >> inputNum;
		if (inputNum>=0)
		{
			for (i = 0; i < inputLen; i++)
			{
				cout << (inputNum % 2) << ' ';
				inputNum = inputNum / 2;
			}
		}
		else
		{
			inputNum = inputNum * -1;
			for (i = 0; i < inputLen; i++)
			{
				switch (was_first_one)
				{
				case true: //2s complement conversion 1s to 0s and 0s to 1s
					if (inputNum%2==0)
					{
						cout << '1' << ' ';

					}
					else
					{
						cout << '0' << ' ';
					}
					inputNum = inputNum / 2;
					break;
				case false:
					if (inputNum%2==1)
					{
						was_first_one = true; //notifying that first 1 from lsb appeared, from now on, flip more signifact bits
					}
					cout << (inputNum % 2) << ' ';
					inputNum = inputNum / 2;
					break;
				}
			}
		}

	}
	else
	{
		cout << "Please Enter a binary number separated by spaces: ";
		compBin = 0;
		for (i = 0; i < inputLen; i++) // creating a pseudo base 2 number
		{
			cin >> inputNum;
			if (i == 0 && inputNum == 1) 
			{
				isNeg = true; // msb 1 signed means negative

			}
			compBin += inputNum;
			if (i<inputLen-1)
			{
				compBin *= 10;
			}
		}
		if (isNeg) //if negative, need to treat number as 2s complemet.
		{
			was_first_one = false; //flag for finding first non zero bit from the right
			for (i = 0; i < inputLen-1; i++)
			{
				inputNum = compBin % 10;
				compBin /= 10;
				powAcc = 1;
				for (j = i; j > -1; j--) // builds up the power in base 2
				{
					if (j>0)
					{
						powAcc *= 2;
					}
					
				}
				//split to 4 cases, to tackle first non zero bit for handling 2s complement.
				if (inputNum == 0 && was_first_one == false)
				{

				}
				else if (inputNum == 0 && was_first_one == true)
				{
					inputNum++;
					outputNum += inputNum * powAcc;

				}
				else if (inputNum == 1 && was_first_one == false)
				{
					outputNum += inputNum * powAcc;
					was_first_one = true;
				}
				else if (inputNum == 1 && was_first_one == true)
				{
					inputNum--;
					outputNum += inputNum * powAcc;
				}
			}
			cout << "the output is: ";
			cout << outputNum*-1; //making the number negative
		}
		else
		{
			cout << "the output is: ";

			for (i = 0; i < inputLen; i++) //chipping away at the number peeling digits
			{
				powAcc = 1;
				powInc = 0;
				while (powInc<=i)//building the power
				{
					if (powInc>0)
					{
						powAcc *= 2;
					}
					powInc++;
				}
				outputNum += compBin % 10 * powAcc;
				compBin /= 10;
			}
			cout << outputNum;
		}

	}
}