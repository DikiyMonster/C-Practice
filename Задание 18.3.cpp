#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	vector <short> vecData (4);
	vecData [0] = 0;
	vecData [1] = 10;
	vecData [2] = 20;
	vecData [3] = 30;
	
	list <short> listIntegers;
	
	listIntegers.insert (listIntegers.begin(), vecData.begin(), vecData.end());
	
	cout << "Содержание списка: ";
	
	list <short> :: const_iterator Element;
	for (Element = listIntegers.begin(); Element != listIntegers.end(); ++Element)
	cout << *Element<<" ";
	return 0;
	
};
