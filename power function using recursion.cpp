//power function using recursion
#include<iostream>
using namespace std;
int power(int x, int p)
{
	if(p!=0)
		return x*power(x,p-1);
	else
		return 1;
}

int main()
{
	cout<<power(10,2);
}
