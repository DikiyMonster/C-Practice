#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	vector <string> items;
	
	int numItems;
	cout <<"������� ���������� �������: ";
	cin >> numItems;
	
	for (int i = 0; i < numItems; ++i)
	{
		cout << "������� ������ ��� ������� " << i + 1 << ":";
		string size;
		cin >> size;
		items.push_back(size);
	}
	
	cout << "������ �������: " << endl;
	for (int i = 0; i < numItems; ++i)
	{
		cout << "�������" << i + 1 << ": "<< items[i] << endl;
	}
	return 0;
}
