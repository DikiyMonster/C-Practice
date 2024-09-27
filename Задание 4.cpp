#include <iostream>
using namespace std;

// Программа должна переводить число, введенное с клавиатуры в метрах, в километры.

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 0;
	cout <<"Введите количество метров: ";
	cin>> a;
	double x = a / 1000;
	cout << a <<" метров будет "<< x << " километра " << endl;
	return 0;
}
