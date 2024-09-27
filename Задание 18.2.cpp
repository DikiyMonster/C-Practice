#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<short> number;
	
	number.push_back(1);
	number.push_back(2);
	number.push_back(3);
	
	cout <<"�������� ������"<<endl;
	
	list<short>::iterator it = number.begin();
    list<short>::iterator end = number.end();
    
    for (; it != end; ++it) 
	{
        cout << *it << " ";
    }
	cout << endl;
	
	list<short>:: iterator it_insert = next(number.begin(),1);
	
	number.insert(it_insert, 4);
	
	cout << "������ ����� ������� ������ ��������: " <<endl;
	
	it = number.begin();
    end = number.end();
    
    for (; it != end; ++it) 
	{
        cout << *it << " ";
    } 
    cout << endl;
    
    cout << "�������, �� ������� ��������� ��������: "<< *it_insert<<endl;
    
    return 0;
}
