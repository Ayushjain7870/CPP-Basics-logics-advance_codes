//inheritance
#include <iostream>
using namespace std;
class item{
	int price,id;
	string name;
	public:
		item()
		{
			cout<<"Enter name, price and id ";
			cin>>name;
			cin>>price;
			cin>>id;
		}
		void put()
		{
			cout<<"Name: "<<name<<", price: "<<price<<" and id: "<<id<<endl;
		}
		~item(){cout<<"\nObject destructed id: "<<id;}
};
class elec : public item
{
	int curr;
	public:
		elec()
		{
			cout<<"Enter current\n";
			cin>>curr;
		}
		void finPut()
		{
			put();
			cout<<"\nCurrent is: "<<curr;
		}
		~elec()
		{
			cout<<"Child class destructor called."<<endl;
		}
		
};
class watt : public elec{
	int watts;
	public:
		watt()
		{
			cout<<"Enter Watt: ";cin>>watts;
		}
		void finfinPut()
		{
			finPut();
			cout<<"\nWatt is: "<<watts;
		}
};
int main()
{
	watt heater;
	heater.finfinPut();
	return 0;
}
