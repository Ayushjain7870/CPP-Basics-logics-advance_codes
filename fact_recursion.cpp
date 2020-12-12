#include <iostream>
#include <cmath>
using namespace std;
int fa(int x)
{
	if (x>0)
	{
		return x*fa(x-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	cout<<fa(5)<<endl;
	cout<<sqrt(25);
}
