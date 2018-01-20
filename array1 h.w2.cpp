// array1 h.w2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()    //(برنامج لقراءة عناصر مصفوفة وطباعة مجموع (اكبر عدد زوجي مع اكبر عدد فردي) مقسوما عل مطروح (اصغر عدد فردي مع اصغر عدد زوجي
{             // hussain ali
	int x[6];
	int max_even = 0;
	int max_odd = 0;
	int sum1, sub2; 
	for (int i = 0; i < 6; i++) {
		cout << " x[" << i << "] = ";
		cin >> x[i];
	}
	for (int i = 0; i < 6; i++) {
		if (x[i] % 2 == 0) {
			if(max_even<x[i])
				max_even = x[i];
	  }
		if (x[i] %2 != 0) {
			if (max_odd < x[i])
				max_odd = x[i];
		}
	}
	sum1 = max_even + max_odd;
	cout << " sum1  : " << sum1 << endl;
	int min_even = max_even;
	int min_odd = max_odd;
	for (int i = 0; i <6; i++) {
		if (x[i] % 2 == 0) {
			if (min_even>x[i])
				min_even = x[i];
		}
		if (x[i] % 2 != 0) {
			if (min_odd > x[i])
				min_odd = x[i];
		}
	}
	sub2 = min_even - min_odd;
    float av= sum1 / sub2;
	cout << " sub2  : " << sub2 << endl;
	cout << " av    : " << av << endl;
    return 0;
}

