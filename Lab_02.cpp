// Lab_02.cpp
// Кругліцький Мстислав
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 14

#include <iostream>

using namespace std;

int main()
{
	double x;
	double z1;
	double z2;

	cout << "Angle Alpha: "; cin >> x; // Angle Aplha input 

	z1 = (cos(x) + sin(x)) / (cos(x) - sin(x));
	z2 = (tan(x) * tan(x)) + ((1 / cos(x)) * (1 / cos(x))); // sec = 1/cos(x)

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cout << "Congratulation!" << endl;

	return 0;
}