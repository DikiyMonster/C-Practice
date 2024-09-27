#include<iostream>

using namespace std;

class DynIntegers
{
	private:
		
		int* pIntegers;
		
	public:
		
		DynIntegers( const int* data, int size) : pIntegers(new int[size])
		{
			for(int i = 0; i< size; ++i)
			{
				pIntegers[i] = data[i];
			}
		}
		
		DynIntegers(DynIntegers&& MoveSource) 
		{
			pIntegers = MoveSource.pIntegers;
			MoveSource.pIntegers = NULL;
		}	
		
		DynIntegers& operator= (DynIntegers&& MoveSource) 
		
		{
			if(this != &MoveSource)
			{
				delete [] pIntegers;
				pIntegers = MoveSource.pIntegers;
				MoveSource.pIntegers = NULL;
			}
			return *this;
		}
		
		~DynIntegers() {delete[] pIntegers;}
};

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	DynIntegers dynIntegers(arr, 5);
	cout << "массив: " << arr << endl;
	return 0;
}
