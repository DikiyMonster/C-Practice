#include <iostream>
using namespace std;

/* Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,  переводит её в 
   верхний регистр и результат выводит в консоль.*/

int main()
{
	setlocale(LC_ALL, "Russian");
	char Lett('a');
	cout <<"Введите букву нижнего регистра: ";
	cin >>Lett;
	Lett = Lett-32;
	cout<<"Получи букву в вехнем регистре: " << Lett<< endl;
	return 0;
}
