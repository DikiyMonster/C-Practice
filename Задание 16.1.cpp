#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "������� ����� ��� �������� ����������" <<endl;
	string strInput;
	cin >> strInput;
	
	string strCopy (strInput);
	reverse (strCopy.begin(), strCopy.end());
	
	if(strCopy == strInput)
		cout << strInput << "��� ���������" << endl;
	else
		cout << strInput << "��� �� ���������" << endl;
		
	return 0;		
	
}
