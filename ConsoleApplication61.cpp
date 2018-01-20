// ConsoleApplication61.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int n; cout << " N = "; cin >> n;
	cout << "\n\n";
	for (int i = 1; i <= n; i++)
	{
		for (int k = n; k >= i; k--)
		{
			cout << " ";
		}
		for (int j = 1; j < i; j++)
		{
			cout << " ";
			cout << "*";
		}

		cout << endl;
	}
	for (int i = 1; i <=n; i++) 
	{
		for (int k = 1; k <= i; k++)
		{
			cout << " ";
		}
		for (int j = n; j >=i ; j--)
		{
				cout << "*";
				cout << " ";
		}
			
		cout << endl;
	}

	
    return 0;
}

