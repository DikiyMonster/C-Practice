#include <iostream>
using namespace std;

class Mammal
{
	public:
		void FeedBadyMilk()
		{
			cout <<"Млекопитающие: Малыш говорит бульк!"<<endl;
		}
		Mammal()
		{
			cout <<"Млекопитающие: конструктор"<<endl;
		}
		~Mammal()
		{
			cout <<"Млекопитающие: деструктор"<<endl;
		}
};

class Reptile
{
	public:
		void SpitVenom()
		{
			cout <<"Рептилии: Плюются ядом!"<<endl;
		}
		Reptile()
		{
			cout <<"Рептилии: конструктор"<<endl;
		}
		~Reptile()
		{
			cout <<"Рептилии: деструктор"<<endl;
		}
};

class Bird
{
	public:
		void LayEggs()
		{
			cout <<"Птицы: Снесла яйцо!"<<endl;
		}
		Bird()
		{
			cout <<"Птицы: конструктор"<<endl;
		}
		~Bird()
		{
			cout <<"Птицы: деструктор"<<endl;
		}
};

class Platypus : public Mammal, public Bird, public Reptile
{
	public:
		Platypus()
		{
			cout <<"Утконос: конструктор"<<endl;
		}
		~Platypus()
		{
			cout <<"Утконос: декструктор"<<endl;
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
