//pattern making
#include<iostream>
using namespace std;
int main()
{
	int c=10;
	//cin>>c;
	
	for(int i=1;i<=c/2;i++)
	{
		for(int spc=c/2;spc>=i;spc--)
		{
			cout<<"  ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			 cout<<"* ";
		}
		cout<<endl;
	}
}
