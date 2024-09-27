#include<iostream>

using namespace std;

template <typename Array1Type, typename Array2Type>

class TwoArrays
{
	private:
		Array1Type Array1 [10];
		Array2Type Array2 [10];
	public:
		Array1Type& GetArray1Element(int Index){return Array1[Index];}	
		Array2Type& GetArray2Element(int Index){return Array2[Index];}
};

int main()
{
	TwoArrays<int, double> arrays1;
    TwoArrays<string, char> arrays2;

    arrays1.GetArray1Element(0) = 42;
    arrays1.GetArray2Element(1) = 3.14;

    arrays2.GetArray1Element(0) = "Hello";
    arrays2.GetArray2Element(1) = 'A';

    cout << arrays1.GetArray1Element(0) << " " << arrays1.GetArray2Element(1) << endl;
    cout << arrays2.GetArray1Element(0) << " " << arrays2.GetArray2Element(1) << endl;

    return 0;
}
