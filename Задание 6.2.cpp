#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	const int ARRAY1 = 3;
	const int ARRAY2 = 2;
	
	int Mass1[ARRAY1] = {1, 2, 3};
	int Mass2[ARRAY2] = {4, 5};
	
	cout << "Умножение каждого элемента 1 массива на каждый элемент 2 массива в обратном порядке "<< endl;
	for ( int arr1 = ARRAY1 - 1; arr1 >= 0; --arr1 )
		for(int arr2 = ARRAY2 - 1; arr2 >= 0; --arr2 )
			cout << Mass1[arr1] << "x" << Mass2[arr2] << "=" << Mass1[arr1] * Mass2[arr2] << endl;
	return 0;		
}
