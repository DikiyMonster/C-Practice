#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	string Doska [8][8] = {"�����" , "��������", "������","�����","����","����"};
	Doska[0][4] = Doska[7][4] = "��������";
	Doska[0][3] = Doska[7][3] = "������";
	cout << "����� ��������: " << Doska [0][4]<< endl;
	cout << "����� ������: " << Doska [0][3]<< endl;
	return 0;
	
	
}
