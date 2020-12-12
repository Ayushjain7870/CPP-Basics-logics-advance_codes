//print pattern
#include <iostream>
using namespace std;

int main()
{
	int in=10,i,j;
	//cin>>in;
	for(i=1;i<=in;i++)
	{
		for(int spc=0;spc<=(in/2)-1;spc++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
