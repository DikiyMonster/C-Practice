#include <iostream>
using namespace std;

// ��������� ������ ���������� �����, ��������� � ���������� � ������, � ���������.

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 0;
	cout <<"������� ���������� ������: ";
	cin>> a;
	double x = a / 1000;
	cout << a <<" ������ ����� "<< x << " ��������� " << endl;
	return 0;
}
