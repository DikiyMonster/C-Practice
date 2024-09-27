#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0;
	cout << "Введите число: " << endl;
	cin>> number ;
	int Result = (((number << 1) + 5) << 1);
	cout << "Ответ: " << Result << endl;  
}
