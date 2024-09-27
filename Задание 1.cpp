#include <iostream>
using namespace std;

/*Составить программу, которая будет считывать введённое пятизначное число. 
  После чего, каждую цифру этого числа необходимо вывести в новой строке.*/

int main() 
{
	setlocale(LC_ALL, "Russian");
	int num = 0;
	cout << "Введите пятизначное число: " << endl;
	cin >> num;
	if (num >= 0 && num <= 9999)
	{
		cout <<"Число неверное"<< endl;
	}
	else
		if(num>=1000000)
	{
		cout <<"Число неверное"<< endl;
	}
	else 
	{
		cout <<"Число 1 = " <<(num/10000) << endl;
		cout <<"Число 2 = " <<(num/1000)%10 << endl;
		cout <<"Число 3 = " <<(num/100)%10 << endl;
		cout <<"Число 4 = " <<(num/10)%10 << endl;
		cout <<"Число 5 = " << num%10 << endl;

	}
}
