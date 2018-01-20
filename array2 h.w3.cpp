// array2 h.w3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()                  //اكتب برنامج لقراءة عناصر المصفوفة الثنائيةوطباعة العناصر اعلى القطر الثاني
{
	int x[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
		 cin>>x[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "\t"<<x[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i + j <3) {
				cout << "\t" << x[i][j];
			}
			else {
				cout << "\t";
			}
		}
		cout << endl;
	}
    return 0;
}

