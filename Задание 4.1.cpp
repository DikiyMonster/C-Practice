#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	string Doska [8][8] = {"Лодья" , "Королева", "Король","Пешка","Конь","Слон"};
	Doska[0][4] = Doska[7][4] = "Королева";
	Doska[0][3] = Doska[7][3] = "Король";
	cout << "Место королевы: " << Doska [0][4]<< endl;
	cout << "Место короля: " << Doska [0][3]<< endl;
	return 0;
	
	
}
