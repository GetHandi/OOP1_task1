#include <iostream>
#include <cassert>
#include "Treangle.h"


using namespace std;

int main()
{
	assert(mediana(4, 6, 6) - 4.1231 < 0.0001);
	assert(mediana(10, 15, 25) - 2.5 < 0.0001);
	assert(mediana(56, 78, 98) - 47 < 0.0001);
	setlocale(LC_ALL, "rus");
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "Введите значение стороны на которую ложится медиана = ";
	cin >> c;
	cout << "Введите значение побочной стороны 1 = ";
	cin >> a;
	cout << "Введите значение побочной стороны 2 = ";
	cin >> b;
	
	cout << mediana(a, b, c);
	
}