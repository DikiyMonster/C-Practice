#include<iostream>

using namespace std;

#define MULTIPLY(a,b) ((a)*(b))

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите первое число: ";
	int one = 0;
	cin >> one;
	
	cout << "¬ведите второе число: ";
	int two = 0;
	cin >> two;
	
	cout << "”множение 2-х числе равно = " << MULTIPLY(one,two) <<endl;
	
	return 0;
}
