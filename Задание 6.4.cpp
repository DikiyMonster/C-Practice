#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	enum RainbowColors
	{
		Red = 0,
		Orange,
		Yelloy,
		Green,
		LightBlue,
		Blue,
		Purple
	};
	cout << "������� ���� �� ����� ���� � ������ " << endl;
	cout << "������� ����� ����� ������ ���� � ������ (������� = 0): ";
	
	int c = Red;
	cin >> c;
	
	switch (c)
	{
	case Red:
		cout << "���� �������"<< endl;
		break;
	case Orange:
		cout << "���� ���������"<< endl;
		break;
	case Yelloy:
		cout << "���� ������"<< endl;
		break;
	case Green:
		cout << "���� �������"<< endl;
		break;
	case LightBlue:
		cout << "���� �������"<< endl;
		break;
	case Blue:
		cout << "���� �����"<< endl;
		break;
	case Purple:
		cout << "���� ����������"<< endl;
		break;
	default:
		cout<<"��� ������ �����" << endl;
		break;	
    }
    return 0;
}
