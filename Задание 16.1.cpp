#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "Введите слово для проверки палиндрома" <<endl;
	string strInput;
	cin >> strInput;
	
	string strCopy (strInput);
	reverse (strCopy.begin(), strCopy.end());
	
	if(strCopy == strInput)
		cout << strInput << "Это палиндром" << endl;
	else
		cout << strInput << "Это не палиндром" << endl;
		
	return 0;		
	
}
