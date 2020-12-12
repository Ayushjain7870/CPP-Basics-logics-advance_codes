#include<iostream>
using namespace std;
class goods
{
	private:
		int tax=0;
		char gstNum[10];
	protected:
		void getTaxP()
		{
			cout<<"Enter tax amount\n";cin>>tax;
			//cout<<"Enter GST-In\n";cin>>gstNum;
		}
		int Fprice(int tax)
		{
			int fprice=price+((price*tax)/100);
			cout<<"fprice"<<fprice<<endl;
			return fprice;
		}
	public:
		char name[20];
		int price=0;
		void get()
		{
			cin>>name;
			cin>>price;
		}
		void getTax()
		{
			getTaxP();
			cout<<"Final Price: "<<Fprice(tax);
		}
	
			
};
class electric:public goods
{
	private:
		int current;
	public:
		void getE()
		{
			get();
			cin>>current;
		}
		void putE()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Price: "<<price<<endl;
			cout<<"Current: "<<current<<" Amp"<<endl;
		}
	
};
int main()
{
	electric heater;
	heater.getE();
	heater.putE();
	cout<<"\nSecond type\n";
	goods stock;
	stock.get();
	stock.getTax();
	cout<<"Third Type\n";
	heater.getE();
	heater.getTax();
	return 0;
}
