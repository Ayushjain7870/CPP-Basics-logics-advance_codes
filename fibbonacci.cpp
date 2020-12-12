#include <iostream>
#define x 0,1,1
using namespace std;
int main()
{
	int a[15];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<15;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<15;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
