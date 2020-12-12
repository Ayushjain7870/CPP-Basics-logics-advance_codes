//password generator
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int lower=65,upper=127;
	int p,n=0;
	cout<<"Lenght of password: "<<upper<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		p=(rand()%(upper-lower+1))+lower;
		cout<<(char)p;
	}
}
