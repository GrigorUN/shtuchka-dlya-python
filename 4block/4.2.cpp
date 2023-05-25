#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	cout << "DWQD";
	sing();
	srav();
	return 0;
}

void sing()
{
	int x;
	cout << "¬ведите число:";
	cin >> x;
}
void srav()
{
	if (x > 0) {
		x = 1;
		cout << "x = " << x;
	}
	else if (x == 0) {
		x = 0;
		cout << "x = " << x;
	}
	else if (x < 0) {
		x = -1;
		cout << "x = " << x;
	}
}
