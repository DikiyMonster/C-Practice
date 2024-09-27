#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int rad = 0;
	double Pi = 3.14;
	cout<<"Число Pi = 3.14" << endl;
	cout<<"Введите радис = ";
	cin >> rad;
	double S =Pi * (rad * rad);
	cout <<"Площадь круга = "<< S << endl;
	double P = 2 * Pi + rad;
	cout <<"Периметр круга = "<< P << endl;
	return 0;
	  
}
