#include<iostream>
using namespace std;                        //Find big value between five values

int main()       // hussain ali
{
	int num1, num2, num3, num4, num5;
	cout << " Num1 = "; cin >> num1;
	cout << " Num2 = "; cin >> num2;
	cout << " Num3 = "; cin >> num3;
	cout << " Num4 = "; cin >> num4;
	cout << " Num5 = "; cin >> num5;
	cout << endl;
	if (num1 > num2&&num1 > num3&&num1 > num4&&num1 > num5) cout << "  The big value = " << num1;
	if (num2 > num1&&num2 > num3&&num2 > num4&&num2 > num5) cout << "  The big value = " << num2;
	if (num3 > num1&&num3 > num2&&num3 > num4&&num3 > num5) cout << "  The big value = " << num3;
	if (num4 > num1&&num4 > num2&&num4 > num3&&num4 > num5) cout << "  The big value = " << num4;
	if (num5 > num1&&num5 > num2&&num5 > num3&&num5 > num4) cout << "  The big value = " << num5;
	cout << endl;
    return 0;
}

