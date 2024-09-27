#include <iostream>
using namespace std;

const double Pi = 3.14;

void Area(double Radius, double& Rezult, double& Rezult1)
{
	Rezult = Pi * Radius * Radius;
	Rezult1 = 2* Pi * Radius;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите радиус: ";
	double Radius = 0;
	cin >> Radius;
	
	double AreaFetched = 0;
	double AreaFetched1 = 0;
	Area(Radius, AreaFetched, AreaFetched1);
	


	cout << "Площадь круга = " << AreaFetched << endl;
	cout << "Периметр круга = " << AreaFetched1 << endl;
	return 0;
}
