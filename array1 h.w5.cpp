// array1 h.w5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void main()      //برنامج لقراءة عناصر مصفوفه وطباعه مجموع(اكبر العنصر في النصف الايمن مع اكبر العنصر في النصف الايسر) مقسوما على مجموع               //
{               // (اكبر عدد زوجي مع اكبر عدد فردي في ضمن مصفوفة)
	int A[10];
	int maxN_R_H = A[5];
	int maxN_L_H = A[0];
	int maxN_even = 0;
	int maxN_odd = 0;
	float sum_maxN, sum_maxN_loc;
	float Div;
	for (int i = 0; i < 10; i++) {
		cin>> A[i];
	}
	cout << endl;
	for (int i = 0; i < 10; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (i >= 5) {
			if (A[i] > maxN_R_H)
				maxN_R_H = A[i];
		}
		if (i < 5) {
			if (A[i] > maxN_L_H)
				maxN_L_H = A[i];
		}
		if (A[i] % 2 == 0) {
			if (A[i] > maxN_even)
				maxN_even = A[i];
		}
		if (A[i] % 2 != 0) {
			if (A[i] > maxN_odd)
				maxN_odd = A[i];
		}
	}
	sum_maxN = maxN_R_H + maxN_L_H;
	sum_maxN_loc = maxN_even + maxN_odd;
	Div = sum_maxN / sum_maxN_loc;
	cout << "sum_maxN : "<<sum_maxN << endl;
	cout << " sum_maxN_loc : "<<sum_maxN_loc << endl;
	cout << " Div : "<<Div << endl;

}

