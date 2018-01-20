#include "iostream"
using namespace std;          //Write program to read a value then check if this value is primary

int main()
{
	int n, c=0;
	cout << "\n  enter the number : "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			c++;
	}
	if (c > 2) cout << "\n the number you entered is not prime. \n\n";

	else       cout << "\n the number you entered is prime. \n\n";

    return 0;
}

