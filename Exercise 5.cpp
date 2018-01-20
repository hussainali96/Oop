// Exercise 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                           //Exercise 5:
                          //Write a C++ program to get the sum of the series
                          // 1- 1 / 2 + 1 / 3 - 1 / 4 + ……1 / n
float sum(int N) {
	float x = 1, num = 1;
    float sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += (1 / x)*num;
			num *= -1;
		x++;
	}

	return sum;
}
int main()
{ 
	int N;
     cout << " N = "; cin >> N;
	 cout <<" sum = "<< sum(N);
	 cout << endl;
    return 0;
}

