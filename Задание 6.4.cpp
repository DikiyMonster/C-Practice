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
	cout << "”знайте есть ли такой цвет в радуге " << endl;
	cout << "¬ведите число чтобы узнать цвет в радуги ( расный = 0): ";
	
	int c = Red;
	cin >> c;
	
	switch (c)
	{
	case Red:
		cout << "÷вет красный"<< endl;
		break;
	case Orange:
		cout << "÷вет оранжевый"<< endl;
		break;
	case Yelloy:
		cout << "÷вет жолтый"<< endl;
		break;
	case Green:
		cout << "÷вет зеленый"<< endl;
		break;
	case LightBlue:
		cout << "÷вет голубой"<< endl;
		break;
	case Blue:
		cout << "÷вет синий"<< endl;
		break;
	case Purple:
		cout << "÷вет фиолетовый"<< endl;
		break;
	default:
		cout<<"Ќет такого цвета" << endl;
		break;	
    }
    return 0;
}
