// Q5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()                              //اكتب برنامج لقراءة عناصر مصفوفة ثنائية وطباعة اكبر عدد في القطر الرئيسي
{                                       //وجمعه مع اكبر عدد في العناصر اعلى القطر الثانوي
	int x[4][4];
	int maxN_mainD = 0, maxN_secondD = 0,sum;
	for (int i = 0; i < 4; i++) {
	for (int j = 0; j < 4; j++) {
	cin>>x[i][j];
	}
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i==j) {
				if (maxN_mainD < x[i][j])
					maxN_mainD = x[i][j];
			}
			else if(i+j==3)
			{
				if (maxN_secondD < x[i][j])
					maxN_secondD = x[i][j];
			}
		}
	}
	cout << "maxN_mainD   = " << maxN_mainD << endl;
	cout << "maxN_secondD = " << maxN_secondD << endl;
	sum = maxN_mainD + maxN_secondD;
	cout << " Sum = " << sum << endl;
	return 0;
}


