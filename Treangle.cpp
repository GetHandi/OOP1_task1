#include <iostream>
#include <cmath>

using namespace std;
/// ��������� ����� �������, ��������� �� ������� ���������� � ������� ���������; 
/// a, b - ������� ������������; 
/// c - ������� ������������ �� ������� ������� �������
double mediana (double a, double b, double c)
{
	return 1.0 / 2.0 * sqrt(2 * a * a + 2 * b * b - c * c);
}