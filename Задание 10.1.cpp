#include <iostream>
using namespace std;

class Mammal
{
	public:
		void FeedBadyMilk()
		{
			cout <<"�������������: ����� ������� �����!"<<endl;
		}
		Mammal()
		{
			cout <<"�������������: �����������"<<endl;
		}
		~Mammal()
		{
			cout <<"�������������: ����������"<<endl;
		}
};

class Reptile
{
	public:
		void SpitVenom()
		{
			cout <<"��������: ������� ����!"<<endl;
		}
		Reptile()
		{
			cout <<"��������: �����������"<<endl;
		}
		~Reptile()
		{
			cout <<"��������: ����������"<<endl;
		}
};

class Bird
{
	public:
		void LayEggs()
		{
			cout <<"�����: ������ ����!"<<endl;
		}
		Bird()
		{
			cout <<"�����: �����������"<<endl;
		}
		~Bird()
		{
			cout <<"�����: ����������"<<endl;
		}
};

class Platypus : public Mammal, public Bird, public Reptile
{
	public:
		Platypus()
		{
			cout <<"�������: �����������"<<endl;
		}
		~Platypus()
		{
			cout <<"�������: �����������"<<endl;
		}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Platypus realFreak;
	realFreak.FeedBadyMilk();
	realFreak.SpitVenom();
	realFreak.LayEggs();
	
	
	
	return 0;
}
