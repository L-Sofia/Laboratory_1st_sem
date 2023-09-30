// Lab_03_1.cpp
// < Любіжанін С. І>
// Лабораторна робота 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 13

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x;
	double y;
	double A;
	double B;
	cout << "x = "; cin >> x;
	A = 2 * abs(x - 5);
	// option 1 short form:
	if (x < -1)
		B = (sin(x) * sin(x)) / 1 + abs(cos(x));
	if (x >= -1 && x <= 1)
		B = cos(1 / abs(x + 2))*cos(1 / abs(x + 2));
	if (x > 1)
		B = log(abs(x + 2));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// option 2 full form:
	if (x < -1)
		B = (sin(x) * sin(x)) / 1 + abs(cos(x));
	else
		if (x > 1)
			B = log(abs(x + 2));
		else
			B = cos(1 / abs(x + 2)) * cos(1 / abs(x + 2));
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}