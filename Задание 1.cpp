#include <iostream>
using namespace std;

/*��������� ���������, ������� ����� ��������� �������� ����������� �����. 
  ����� ����, ������ ����� ����� ����� ���������� ������� � ����� ������.*/

int main() 
{
	setlocale(LC_ALL, "Russian");
	int num = 0;
	cout << "������� ����������� �����: " << endl;
	cin >> num;
	if (num >= 0 && num <= 9999)
	{
		cout <<"����� ��������"<< endl;
	}
	else
		if(num>=1000000)
	{
		cout <<"����� ��������"<< endl;
	}
	else 
	{
		cout <<"����� 1 = " <<(num/10000) << endl;
		cout <<"����� 2 = " <<(num/1000)%10 << endl;
		cout <<"����� 3 = " <<(num/100)%10 << endl;
		cout <<"����� 4 = " <<(num/10)%10 << endl;
		cout <<"����� 5 = " << num%10 << endl;

	}
}
