#include <iostream>
#include <bitset> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	short a = 0;
	cout << "������� ������ �����: "<< endl;
	cin >> a;
	bitset<8> aa(a);
	cout << "������� ������ �����: " << aa <<endl;
	cout << "������� ������ �����: "<< endl;
	short b = 0;
	cin >> b;
	bitset<8> bb(b);
	cout << "������� ������ �����: " << bb <<endl;
	bitset<8> n = (~a);
	cout << "��������� �������� NOT ��� ������� �����: " << n <<endl;
	bitset<8> h = (~b);
	cout << "��������� �������� NOT ��� ������� �����: " << h <<endl;
	bitset<8> c = (a | b);
	cout << "��������� �������� OR: " << c << endl;
	bitset<8> d = (a & b);
	cout << "��������� �������� AND: " << d << endl;
	bitset<8> e = (a ^ b);
	cout << "��������� �������� XOR: " << e << endl;
	return 0;
	
}

