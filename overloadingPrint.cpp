//Library of functions
#include <iostream>
using namespace std;
void print(int a)	 {cout<<a<<endl;}
void print(double a) {cout<<a<<endl;}
void print(char a)	 {cout<<(int)a<<endl;}
int main()
{
	int a,upper=69,lower=0;
	for(int i=0;i<10;i++)
	{
		a=(rand()%(upper-lower+1))+lower;
		print(a);
	}
	
	return 0; 
}
