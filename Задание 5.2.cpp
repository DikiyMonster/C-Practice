#include <iostream>
#include <bitset> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	short a = 0;
	cout << "Введите первое число: "<< endl;
	cin >> a;
	bitset<8> aa(a);
	cout << "Битовое первое число: " << aa <<endl;
	cout << "Введите второе число: "<< endl;
	short b = 0;
	cin >> b;
	bitset<8> bb(b);
	cout << "Битовое второе число: " << bb <<endl;
	bitset<8> n = (~a);
	cout << "Побитовый оператор NOT для первого числа: " << n <<endl;
	bitset<8> h = (~b);
	cout << "Побитовый оператор NOT для второго числа: " << h <<endl;
	bitset<8> c = (a | b);
	cout << "Побитовый оператор OR: " << c << endl;
	bitset<8> d = (a & b);
	cout << "Побитовый оператор AND: " << d << endl;
	bitset<8> e = (a ^ b);
	cout << "Побитовый оператор XOR: " << e << endl;
	return 0;
	
}

