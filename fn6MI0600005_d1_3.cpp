/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Georgi Kostov
* @idnumber 6MI0600005
* @task 3
*
*/
#include <iostream>
using namespace std;

void centerRight(int n)
{
	for (int i = 1; i <=  (74 - ((n - 2) * 3))/2; ++i)
	{
		cout << ' ';
	}
}
void centerDown(int n)
{
	for (int i = 1; i <= 11 - (n - 2); ++i)
	{
		cout << '\n';
	}
}
int main()
{
	const int maxInput = 9;
	const int minInput = 2;
	int N;
	cin >> N;

	while (N > maxInput || N < minInput)
	{
		cout << "Incorrect input\n";
		cin >> N;
	}
	centerDown(N);
	for (int i=1; i<=N ;++i)
	{
		centerRight(N);
		for (int j = 1; j <= i; ++j)
		{
			cout << j;
		}
		if (i == N)
		{
			for (int k = 1; k <= N; ++k)
			{
				cout << '-';
			}
		}
		else 
		{
			for (int k = 1;k <= 3 * N - 2 * i; ++k)
			{
				cout << ' ';
			}
		}
		for (int j = i; j > 0; --j)
		{
			cout << j;
		}
		cout << endl;
	}
	for (int i = N-1;0<=i;--i) 
	{
		centerRight(N);
		for (int j = 1;j<=i;++j)
		{
			cout << j;
		}
		for (int k = 1; k <= 3 * N - 2 * i; ++k)
		{
			cout << ' ';
		}
		for (int j = i; j > 0; --j)
		{
			cout << j;
		}
		cout << endl;
	}

	return 0;
}
