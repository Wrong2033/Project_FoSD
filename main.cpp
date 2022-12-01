#include <iostream>

using namespace std;

double my_pow(double num, unsigned int deg)
{
	if (deg == 0)
		return 1;
	else if (deg == 1)
		return num;
	else if (deg % 2 == 0)
		return my_pow(num * num, deg / 2);
	else
		return my_pow(num * num, deg / 2) * num;
}

int main()
{
	double num;
	unsigned int deg;
	cout << "Enter number: ";
	cin >> num;cout << "Enter degree: ";
	cin >> deg;
	num = my_pow(num, deg);
	cout << "Result: " << num;
}

