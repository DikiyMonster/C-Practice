#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0;
	cout << "������� �����: " << endl;
	cin>> number ;
	int Result = (((number << 1) + 5) << 1);
	cout << "�����: " << Result << endl;  
}
