#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	unsigned long long int pwd,a=999999999,len;
	//till digits number 9
	len=18446744073; //define length
	
	
	//cout<<"Enter password should be less than "<<len<<"\n";
	//cin>>pwd;
	pwd=0;
	for(int i=0;i<len;++i)
	{
		if(pwd==a)
		{
			cout<<"\nCorrect & Connected password\n"<<pwd;
			break;
		}
		else
		{
			if(i==(len-1))cout<<"\nIncorrect Password \n";
		}
		pwd++;
	}
	
}
