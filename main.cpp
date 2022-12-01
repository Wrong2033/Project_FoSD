#include <iostream>

using namespace std;

double my_pow(double num, int deg)
{
	double temp = num;
	for (int i = 1; i < abs(deg); i++)
	{
		num = num * temp;
	}
	if (deg < 0)
	{
		num = 1 / num;
	}
	return num;
}

int main()
{
	double num;
	int deg;
	cout << "Enter number: ";
	cin >> num;cout << "Enter degree: ";
	cin >> deg;
	num = my_pow(num, deg);
	cout << "Result: " << num;
}

