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
	cout << "Введите число: ";
	cin >> num;
	
	number.push_front(num);
	
	cout << "Хотите ввести ещё числа (y/n): ";
	cin >> choice;	
	}
	
	while (choice == 'y');
	
	cout << "Список чисел в обратном порядке:" << endl;
	
    list<short>::iterator it = number.begin();
    list<short>::iterator end = number.end();
    
    for (; it != end; ++it) 
	{
        cout << *it << " ";
    }
	cout << endl;
	
	return 0;
}
