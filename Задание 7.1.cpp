#include <iostream>
using namespace std;

const double Pi = 3.14;

double Valume(double Radius);
double Valume(double Radius, double Height);


int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите 'z' для вычисления объёма цилиндра или 'c' для сферы: ";
	char Choize = 'z';
	cin >> Choize;
	
	cout <<"Введите длину радиуса: ";
	double Radius = 0;
	cin >> Radius;
	
	if(Choize == 'z')
	{
		cout <<"Введите длину высоты: ";
		double Height = 0;
		cin >> Height;
		
		cout << "Объем цилиндра = " << Valume(Radius, Height) << endl;
	}
	else
		cout << "Объем сферы  = " << Valume(Radius) << endl;
		return 0;
}
double Valume(double Radius)
{
	return (4 * Pi * Radius * Radius * Radius) / 3;
}
double Valume(double Radius, double Height)
{
	return Pi * Radius * Radius * Height;
}

