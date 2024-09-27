#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout <<"¬ведите строку дл€ преобразовани€ строка в верхний регистра: "<< endl;

	string strInput;
	getline (cin, strInput);

	transform(strInput.begin(),strInput.end(),strInput.begin(), ::toupper);

	
	cout << "ѕреобразованна€ строка в верхний регист" << endl;
	cout << strInput << endl;
	
	return 0;	
}
