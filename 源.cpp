//2017.11.21
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	double a, b, c;
	cout << "plese input two numbers./n if a>b ,outcome words,else c=a/b." << endl;
	cin >> a >> b;
	if (a>b&&a == 5)
	{
		cout << "a>b and a=5" << endl;
	}
	else
	{
		c = a / b;
		cout << "a/b=" << setprecision(2) << c << endl << "I am your o do sang" << endl;
	}
	cout << setfill('^') << setw(8) << c << endl;
	return 0;
}
