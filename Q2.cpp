// Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;         

int main()                                 // اكتب برنامج لقراءة مصفوفتين ثنائيتين وطباعة مجموع عناصر القطر الرئيس للمصفوفة 
{                                          //الاولى مع مجموع عناصر القطر الثانوي لمصفوفة الثانية
	int array1[4][4],array2[4][4];
	int sum_mainD = 0, sum_secondD = 0;
	float sum = 0, count = 0, avg;
	cout << " Enter the number array one : " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> array1[i][j];
		}
	}
	cout << " Enter the number array two : " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> array2[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == j) {
				sum_mainD += array1[i][j];
			}
			if (i + j == 3) {
				sum_secondD += array2[i][j];
			}
		}
	}
	cout << " summation main diagonal the array one   = " << sum_mainD << endl;
	cout << " summation second diagonal the array two = " << sum_mainD << endl;
	return 0;
}

