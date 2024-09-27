#include<iostream>
#include<vector>

using namespace std;

char DisplayOptions()
{
	cout << "Что вы выберите?" << endl;
	cout << "1.Ввести целое число" << endl;
	cout << "2.Запрос заданного значения индекса" << endl;
	cout << "3.Отображение вектора" << endl;
	cout << "4.Выход" << endl;
	
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
			cout << "Введите число которое нужно вставить: ";
			int DataInput = 0;
			cin >> DataInput;
			
			vecData.push_back (DataInput);
		}
		
		else if (chUserChoice == '2')
		{
			cout <<"Введите индекс от 0 до ";
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
			cout << "Содержимое вектора: ";
			for(size_t Index = 0; Index < vecData.size(); ++Index)
				cout << vecData [Index] <<' ';
				cout << endl;
		}
	}
	return 0;
}
