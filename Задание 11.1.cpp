#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual double Area() = 0;
		virtual void Print() = 0;
};

class Circle
{
	double Radius;
	public:
		Circle(double inputRadius) : Radius(inputRadius) {}
		
		double Area()
		{
			return 3.1415*Radius*Radius;
		}
		
		void Print()
		{
			cout <<"������� ������� ����� Pi * ������^2"<<endl;
		}
};

class Triangle
{
	double Base, Height;
	public:
		Triangle(double inputBase, double inputHeight) : Base(inputBase), Height(inputHeight){}
		
	double Area()
	{
		return 0.5*Base*Height;
	}
	
	void Print()
	{
		cout<<"������� ������� ������������ 0,5 * ��������� * ������"<<endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");
	Circle myRing(5);
	Triangle myWarningTriangle(6.6, 2);
	
	cout<<"������� ����� = "<<myRing.Area()<<endl;
	cout<<"������� ������������ = "<<myWarningTriangle.Area()<<endl;
	
	myRing.Print();
	myWarningTriangle.Print();
	
	return 0;
}

