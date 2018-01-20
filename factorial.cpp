// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                                  //Print factorial for any value entered by users.
int main()
{
	int N, fact=1;
	cout << " N = ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		fact *= i;
	}
	cout << " factorial " << N << " =  " << fact << endl;
    return 0;
}

