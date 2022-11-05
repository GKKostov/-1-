/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Georgi Kostov
* @idnumber 6MI0600005
* @task 1
*
*/

#include <iostream>
using namespace std;

int reverseNum(unsigned int num)
{
	int lastDigit = 0;
	int reversedNum = 0;
	while (num != 0)
	{
		lastDigit = num % 10;
		reversedNum = reversedNum * 10 + lastDigit;
		num /= 10;
	}
	return reversedNum;
}
int main()
{
	const int maxInput = 1000000;
	const int minInput = 1;
	int multiplier = 1;
	int digitVal = 0;
	int reversed = 0;
	unsigned int N;
	int M = 0;
	cin >> N;
	while (N > maxInput || N < minInput)
	{
		cout << "Incorrect input\n";
		cin >> N;
	}

	while (N!=0)
	{
		digitVal = N % 10;
		digitVal *= digitVal;
		M += digitVal * multiplier;
		if (digitVal > 9)
		{
			multiplier *= 100;
		}
		else 
		{
			multiplier *= 10;
		}
		N /= 10;
	}
	
	reversed = reverseNum(M);
	cout << ++reversed;
	
	
	return 0;
}



