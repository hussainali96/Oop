// pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()                        //Activity
{                                //Write a C++ program to arrange of array hexa[3][3] by acending.
	int arr[3][3],swap;
	int(*p)[3] = arr;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> *(*(p + i) + j);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				for (int h = 0; h < 3; h++) {
					if (*(*(p + i) + j) < *(*(p+ k) + h)) {
						swap = *(*(p + i) + j);
						*(*(p + i) + j) = *(*(p + k) + h);
						*(*(p + k) + h) = swap;
					}
				}
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout<<"\t"<< *(*(p + i) + j);
		}
		cout << endl;
	}
	cout << endl;
    return 0;
}

