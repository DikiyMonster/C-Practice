#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int rad = 0;
	double Pi = 3.14;
	cout<<"����� Pi = 3.14" << endl;
	cout<<"������� ����� = ";
	cin >> rad;
	double S =Pi * (rad * rad);
	cout <<"������� ����� = "<< S << endl;
	double P = 2 * Pi + rad;
	cout <<"�������� ����� = "<< P << endl;
	return 0;
	  
}
