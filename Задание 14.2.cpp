#include<iostream>

using namespace std;

template <typename T> T Split(const T& input)
{
	return (input / 5);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int input = 100;
	int result = Split(input);
	cout <<"Ответ = " << result << endl;
	return 0;
}
