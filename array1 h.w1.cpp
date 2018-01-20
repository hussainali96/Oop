// array1 h.w1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
               
int main()     //برنامج لقراءة عناصر مصفوفة الاحادية وطباعة العنصر الاكثر تكرارا وعدد مرات التكرار 
{                
	int x[5];
	int repeat=0, number=0;
	for (int i = 0; i < 5; i++) {
		cout << " x["<<i << "] = ";
		cin >> x[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		int count = 0;
		for (int j = 0; j < 5; j++) {
			if (x[i] == x[j]) {
				count++;
				}
		}
		
			if (count>repeat) {
				number = x[i];
				repeat = count;
			}
		
	}
	if (repeat != 1) {
		cout << "    number   :  " << number << endl;
		cout << " number repeat:  " << repeat;
	}
	else {
		cout << "  No  number  " << endl;
		cout << "  No number repeat  ";
	}
	cout << "\n\n";
    return 0;
}

