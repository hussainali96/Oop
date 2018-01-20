// array1 h.w6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int x[5] = { 1,2,3,4,5 };
	int swap;
	swap = x[0];
	x[0] = x[4];
	x[4] = swap;
		for (int i = 0; i < 5; i++) {
			cout << x[i] << endl;
	}
    return 0;
}

