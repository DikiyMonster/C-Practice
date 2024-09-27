#include<iostream>
using namespace std;

class Date
{
	private:
		
	int Day, Month, Year;
	
	public:
		Date (int Day, int Month, int Year) 
		: Day(Day), Month(Month), Year(Year) {};
		
		operator int ()
		{
			return ((Day * 100000)+(Month*10000)+Year);
		}

		
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Date myData (14, 9, 2023);
	int dataAsInt = myData;
	cout <<"Дата как целое число: "<< dataAsInt <<endl;
	return 0;
}
