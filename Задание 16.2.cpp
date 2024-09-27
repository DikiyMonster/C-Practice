#include<iostream>
#include<string>

using namespace std;

short GetNumChar (string& strInput, char chToFind)
{
	short NumCharFound = 0;
	
	size_t CharOffset = strInput.find (chToFind);
	while (CharOffset != string::npos)
	{
		++ NumCharFound;
		
		CharOffset = strInput.find (chToFind, CharOffset+1);
	
	}
	return NumCharFound;
} 

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите строчку на Англиском языке" << endl;
	string strInput;
	getline (cin, strInput);
	
	int NumVowels = GetNumChar (strInput, 'a');
	NumVowels += GetNumChar (strInput, 'e');
	NumVowels += GetNumChar (strInput, 'i');
	NumVowels += GetNumChar (strInput, 'o');
	NumVowels += GetNumChar (strInput, 'u');

	
	cout <<"Колличество гласных в этом предложении:" << NumVowels;
	
	return 0;
}
