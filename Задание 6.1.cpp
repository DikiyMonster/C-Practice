#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 3; 
	int Mass[ROWS] = {1, 2, 3};
							
	for(int row = ROWS - 1; row >= 0; --row)

			cout << "Число [" << row <<"] = "<< Mass[row]<<endl;
	
	return 0;
}
