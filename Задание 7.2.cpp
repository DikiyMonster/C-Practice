#include <iostream>
using namespace std;

void MassDouble(double Num[], int Length)
{
	for (int Index = 0; Index <Length; ++Index )
		cout << Num[Index] << ""<< endl;
}
int main()
{
	double MyNum[4] = {2.1, 3.5, 4.6, 5.7};
	MassDouble(MyNum, 4);
	return 0;
}

