#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout <<"������� ������ ��� �������������� ������ � ������� ��������: "<< endl;

	string strInput;
	getline (cin, strInput);

	transform(strInput.begin(),strInput.end(),strInput.begin(), ::toupper);

	
	cout << "��������������� ������ � ������� ������" << endl;
	cout << strInput << endl;
	
	return 0;	
}
