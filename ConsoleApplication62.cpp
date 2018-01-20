// ConsoleApplication62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int n;  cout << " N = ";  cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j= 1; j <= i; j++) {
			cout << "*";
			cout << " ";
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++) {

		for (int j = n; j > i; j--) {
			cout << "*";
			cout << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
    return 0;
}

