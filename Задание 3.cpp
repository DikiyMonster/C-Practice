#include <iostream>
using namespace std;

/* �������� ���������, ������� ��������� ������������ ������ � ������� ��������� ����� ������� ��������,  ��������� � � 
   ������� ������� � ��������� ������� � �������.*/

int main()
{
	setlocale(LC_ALL, "Russian");
	char Lett('a');
	cout <<"������� ����� ������� ��������: ";
	cin >>Lett;
	Lett = Lett-32;
	cout<<"������ ����� � ������ ��������: " << Lett<< endl;
	return 0;
}
