#include<iostream>

using namespace std;

#define MULTIPLY(a,b) ((a)*(b))

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������ �����: ";
	int one = 0;
	cin >> one;
	
	cout << "������� ������ �����: ";
	int two = 0;
	cin >> two;
	
	cout << "��������� 2-� ����� ����� = " << MULTIPLY(one,two) <<endl;
	
	return 0;
}
