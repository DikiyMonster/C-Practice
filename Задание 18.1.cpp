#include<iostream>
#include<list>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	list<short> number;
	
	short num;
	char choice;
	
	do
	{
	cout << "������� �����: ";
	cin >> num;
	
	number.push_front(num);
	
	cout << "������ ������ ��� ����� (y/n): ";
	cin >> choice;	
	}
	
	while (choice == 'y');
	
	cout << "������ ����� � �������� �������:" << endl;
	
    list<short>::iterator it = number.begin();
    list<short>::iterator end = number.end();
    
    for (; it != end; ++it) 
	{
        cout << *it << " ";
    }
	cout << endl;
	
	return 0;
}
