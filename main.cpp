#include <iostream>

using namespace std;

double my_pow(double num, unsigned int deg)
{
	double temp = num;
	for (int i = 1; i < deg; i++)
	{
		num = num * temp;
	}
	return num;
}

int main()
{
	double num;
	unsigned int deg;
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter degree: ";
	cin >> deg;
	num = my_pow(num, deg);
	cout << "Result: " << num;
}

