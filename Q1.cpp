// Q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()    //اكتب برنامج لقراءة عناصر مصفوفة ثنائية وطباعة المتوسط الحسابي 
{
	int A[3][3];
	float sum = 0, count = 0,avg;
	cout << " Enter the number array : " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += A[i][j];
			count++;
		}
	}
	avg = sum / count;
	cout << " The SMA = " << avg << endl;
    return 0;
}

