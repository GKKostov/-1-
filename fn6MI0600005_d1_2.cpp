/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Georgi Kostov
* @idnumber 6MI0600005
* @task 2
*
*/

#include <iostream>
using namespace std;

int calculateNum(int num, int ammount, char letter)
{
	while (num >= ammount)
	{
		cout << letter;
		num -= ammount;
	}
	return num;
}
int main()
{
	const int maxInput = 2000;
	const int minInput = 1;
	int aThousand = 1000;
	int nineHundred = 900;
	int fiveHundred = 500;
	int fourHundred = 400;
	int aHundred = 100;
	int ninety = 90;
	int fifty = 50;
	int forty = 40;
	int ten = 10;
	int five = 5;
	int one = 1;
	unsigned int num;
	cin >> num;
	
	while (num > maxInput || num < minInput)
	{
		cout << "Incorrect input\n";
		cin >> num;
	}
	
	if (num >= aThousand)
	{
		num = calculateNum(num, aThousand, 'M');
	}
	if (num >= nineHundred)
	{
		cout << "CM";
		num -= nineHundred;
	}
	if (num >= fiveHundred)
	{
		num = calculateNum(num, fiveHundred, 'D');
	}
	if (num >= fourHundred)
	{
		cout << "CD";
		num -= fourHundred;
	}
	if (num >= aHundred)
	{
		num = calculateNum(num, aHundred, 'C');
	}
	if (num >= ninety)
	{
		cout << "XC";
		num -= ninety;
	}
	if (num >= fifty)
	{
		num = calculateNum(num, fifty, 'L');
	}
	if (num >= forty)
	{
		cout << "XL";
		num -= forty;
	}
	if (num >= ten)
	{
		num = calculateNum(num, ten, 'X');
	}
	if (num >= five)
	{
		if (num == 9) 
		{
			cout << "IX";
			return 0;
		}
		num = calculateNum(num, five, 'V');
	}
	if (num >= one)
	{
		if (num == 4) 
		{
			cout << "IV";
			return 0;
		}
		num = calculateNum(num, one, 'I');
	}
	
	return 0;
}
