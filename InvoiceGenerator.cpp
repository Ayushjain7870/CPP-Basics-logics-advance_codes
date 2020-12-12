#include<iostream>
using namespace std;
class invoice
{
	public:
		char id[5],productName[25];
		int price,tax;
		int putData();
		invoice()
		{
			cout<<"Enter Product name:\n";cin>>productName;
			cout<<"Enter Id number\n";cin>>id;
			cout<<"Enter price\n";cin>>price;
			cout<<"Tax percentage\n";cin>>tax;
		}	
};
invoice::putData()
{
	system("CLS");
	cout<<"INVOICE GENERATED\n--------------------------------";
	cout<<"\nName: "<<productName<<"\nID: "<<id;
	system("color 3");
	cout<<"\nFinal Price Inc. of taxes: "<<(price+(price*tax)/100);	
}
int main()
{
	system("color 1");	
	char i='N';
	while(i=='N'||i=='n')
	{
	invoice bill;
	bill.putData();
	cout<<"\nTo exit type y or tow generate another invoice press n"<<endl;
	cin>>i;
	system("CLS");
	}
}
