#include<iostream>
#include<vector>

using namespace std;

char DisplayOptions()
{
	cout << "��� �� ��������?" << endl;
	cout << "1.������ ����� �����" << endl;
	cout << "2.������ ��������� �������� �������" << endl;
	cout << "3.����������� �������" << endl;
	cout << "4.�����" << endl;
	
	char ch;
	cin >> ch;
	
	return ch;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	vector<int> vecData;
	char chUserChoice = '\0';
	
	while((chUserChoice = DisplayOptions()) !='4')
	{
		if(chUserChoice == '1')
		{
			cout << "������� ����� ������� ����� ��������: ";
			int DataInput = 0;
			cin >> DataInput;
			
			vecData.push_back (DataInput);
		}
		
		else if (chUserChoice == '2')
		{
			cout <<"������� ������ �� 0 �� ";
			cout << (vecData.size () - 1) <<": ";
			int Index = 0;
			cin >> Index;
			
			if (Index < (vecData.size()))
			{
				cout << "Element ["<< Index << "] = " << vecData[Index];
				cout << endl;
			}
		}
		else if (chUserChoice == '3')
		{
			cout << "���������� �������: ";
			for(size_t Index = 0; Index < vecData.size(); ++Index)
				cout << vecData [Index] <<' ';
				cout << endl;
		}
	}
	return 0;
}
