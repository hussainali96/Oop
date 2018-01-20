// array1 h.w3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()      // برنامج لقراءة عناصر مصفوفة احادية وطباعة اكبر قيمه في مواقع زوجية 
{
	int x[6];
	int Max_Number = x[0];
	for (int i = 0; i < 6; i++) {
		cout << " x[" << i << "] = ";
		cin >> x[i];
	}
	for (int i = 0; i < 6; i++) {
		if (i % 2 == 0) {
			if (Max_Number < x[i]) {
				Max_Number = x[i];
			}
		}
	}
	cout << endl;
	cout << " Max number in even loction  is : " << Max_Number;
	cout << endl;
    return 0;
}

