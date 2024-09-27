#include <iostream>
using namespace std;

class Circle
{
	const double Pi;
	double Radius;
	
	public:
		Circle(double InputRadius) : Radius(InputRadius), Pi(3.1416){}
		double GetCircumference()
		{
			return 2*Pi*Radius;
		}
		double GetArea()
		{
			return Pi*Radius*Radius;
		}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите радиус:";
	double Radius = 0;
	cin>> Radius;
	
	Circle MyCircle(Radius);
	
	cout <<"Площадь круга = " << MyCircle.GetCircumference() << endl;
	cout <<"Периметр круга = " << MyCircle.GetArea() <<endl;
	
	return 0;
}
