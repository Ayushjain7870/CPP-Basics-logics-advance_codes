//Factorial using recursion
#include <iostream>
using namespace std;
int jabba(int x)
{
	if (x>1)
		return x*jabba(x-1);
	else
		return 1;
}
int main()
{
	cout<<jabba(5);
}
