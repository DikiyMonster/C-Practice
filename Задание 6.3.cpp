#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int Nums = 0;
	cout << "������� ����������� ����������: ";
	cin >> Nums;
	
	int num1 = 0, num2 = 1;
	char wan = '\0';
	cout << num1 << " " << num2 << " ";
	
	do
	{
		for (int index = 0; index < Nums; ++index)
		{
			cout << num1 + num2 << " ";
			int num2temp = num2;
			num2 = num1 + num2;
			num1 = num2temp;
		}
		cout <<endl << "���������� ���������� (y/n)?";
		cin >> wan;
	} 
	while(wan == 'y');
	cout << "�����!"<< endl;
	return 0;
}
