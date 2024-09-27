#include <iostream>
using namespace std;

/*Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) Числа а, b, f вводятся с
  клавиатуры. Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны
  вводиться числа.*/

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	int f = 0;
	cout << "Введите цифры a, b и f: "<< endl;
	cout <<"a=";
	cin>>a;
	cout <<"b=";
	cin>>b;
	cout <<"f=";
	cin>>f;
	cout<<"Вычисляем по формуле х = (a + b - f / a) + f * a * a - ( a + b )"<< endl;
	int x =(a + b - f / a) + f * a * a - ( a + b );
	cout<<"x="<<x<<endl;
	return 0;
	
}
