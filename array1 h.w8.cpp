// array1 h.w8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                 //hussain ali
int main()      //برنامج لقراءة عناصر المصفوتين احاديتين وطباعة مجموع المصفوفتين بدون استخدام عملية الجمع
{
	int A[5], B[5];
	int sum_arr = 0;
	for (int i = 0; i < 5; i++) {
		cout << " A[" << i << "] = ";
		cin >> A[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << " B[" << i << "] = ";
		cin >> B[i];
	}
	for (int i = 0; i < 5; i++) {
		sum_arr -= -(A[i] - (-B[i]));
	}
	cout << endl << " summation two arrays is :  " << sum_arr << endl;


    return 0;
}

