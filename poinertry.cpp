#include<iostream>
using namespace std;
class disp
{
	public:
	int *a,b[5],re;
	int getdata()
	{

	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}		
	
	}
	int pp()
	{
		a=b;
	}
	int putdata()
	{
		for(int i;i<5;i++)
	{
		re=*a;
		cout<<"data "<<re<<"\n";
		a++;
	}
			
	}	
};
int main()
{
	disp input;
	disp output;
	disp put;
	input.getdata();
	put.pp();
	output.putdata();
		
	
	system("pause");
}
