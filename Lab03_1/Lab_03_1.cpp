// Lab_03_1.cpp
// Самойлюка Дениса
// Лабораторна робота № 03.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,y,B;
	cout << "x = "; cin >> x;
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		B = log10(abs(cos(5 * x))) + exp(1 / x + x);
	if (-1 < x && x < 0.4)
		B = sqrt(pow((2 - x),3)) - tan(x);
	if (x >= 0.4)
		B = sin(5 * x) - sqrt(abs(1 - x));
	y = x + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		B = log10(abs(cos(5 * x))) + exp(1 / x + x);
	else
		if (x >= 0.4)
			B = sin(5 * x) - sqrt(abs(1 - x));
		else
			B = sqrt(pow((2 - x), 3)) - tan(x);
	y = x + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}