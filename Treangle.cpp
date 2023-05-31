#include <iostream>
#include <cmath>

using namespace std;
/// вычисляет длину медианы, ложащуюся на сторону переданную в третьем параметре; 
/// a, b - стороны треугольника; 
/// c - сторона треугольника на которую опущена медиана
double mediana (double a, double b, double c)
{
	return 1.0 / 2.0 * sqrt(2 * a * a + 2 * b * b - c * c);
}