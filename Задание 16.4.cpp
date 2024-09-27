#include<iostream>
#include<string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const string str1 = "I";
	const string str2 = "Love";
	const string str3 = "STL";
	const string str4 = "String";
	
	string strResult = str1 + " " + str2 + " " + str3 + " " + str4;
	
	cout << "Вывод предложения:"<< endl;
	cout << strResult;
}
