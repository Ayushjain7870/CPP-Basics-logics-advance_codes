#include<iostream>
using namespace std;
class family{
	public:
		char name[20];
		int age,weight,height;
		family()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
			cout<<"Enter Weight: ";
			cin>>weight;
			cout<<"Enter Height: ";
			cin>>height;
		}
		void put()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Weight: "<<weight<<endl;
			cout<<"Height: "<<height<<endl;
		}
};
int main()
{
	family ayush;
	ayush.put();
	cout<<"\n";
	family akshay;
	akshay.put();
}
