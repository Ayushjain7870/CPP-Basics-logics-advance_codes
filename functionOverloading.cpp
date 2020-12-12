//function overloading
#include <iostream>
using namespace std;
void print(int a)
{
	cout<<"Int is "<<a<<endl;
}
void print(double b)
{
	cout<<"Float is "<<b<<endl;
}
void print(char c)
{
	cout<<"Char is "<<c<<endl;
}
int main()
{
	print(10);
	print(69.69);
	print('a');
}
