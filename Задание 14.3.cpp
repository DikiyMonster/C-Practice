#include<iostream>

using namespace std;

template <typename T>
void Swap (T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
} 

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int x = 0;
	cout << " ������� ����� � = " ;
	cin >>x;
	
	int y = 0;
	cout << " ������� ����� y = " ;
	cin >>y;
	
	Swap(x,y);
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
