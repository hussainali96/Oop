// array1 h.w4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()           //hussain ali
{                   // برنامج لقراءة عناصر مصفوفه وطباعه العنصر الذي تقبل كل عناصر مصفوفه  القسمه عليه 
	int x[5];       
	int Number = 0, max = 5;
	for (int i = 0; i < 5; i++) {
		cout << " x[" << i << "] = ";
		cin >> x[i];
	}
	for (int i = 0; i < 5; i++) {
		int w = 0;
		for (int j = 0; j < 5; j++) {
			if ( x[j]%x[i] == 0) {
				w++;
			}
		}
		if (w == max) {
			Number = x[i];
		}
	}
	cout << " Number  : " << Number << endl;
    return 0;
}

