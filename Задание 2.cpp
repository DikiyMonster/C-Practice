#include <iostream>
using namespace std;

/*����������������� ��������� ���������: (� + b � f / �) + f * a * a � (a + b) ����� �, b, f �������� �
  ����������. ������������ ���������������� ���������, ����� �������, ����� ���� �������, � ����� ������� ������
  ��������� �����.*/

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	int f = 0;
	cout << "������� ����� a, b � f: "<< endl;
	cout <<"a=";
	cin>>a;
	cout <<"b=";
	cin>>b;
	cout <<"f=";
	cin>>f;
	cout<<"��������� �� ������� � = (a + b - f / a) + f * a * a - ( a + b )"<< endl;
	int x =(a + b - f / a) + f * a * a - ( a + b );
	cout<<"x="<<x<<endl;
	return 0;
	
}
