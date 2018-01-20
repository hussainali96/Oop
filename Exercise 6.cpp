// Exercise 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                           //Exercise 6:
                          //Write a C++ program to get the sum of the series
                          // 1 - 1 / 2!+ 1 / 3!- 1 / 4!+ ……1 / n!
float sum(int N) {
	float sum = 0, num = 1, x = 1;
	for (int i = 1; i <= N; i++) {
		float fact = 1;
		for (int j = 1; j <= x; j++) {
			fact *= j;
		}
		sum += (1 / fact)*num;
			num *= -1;
			x++;
	}
	return sum;
 }
int main()
{
	int N;
	cout << " N = "; cin >> N;
	cout << " sum of series = " << sum(N);
	cout << endl;
    return 0;
}

