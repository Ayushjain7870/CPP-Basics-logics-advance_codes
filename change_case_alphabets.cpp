//UPPER TO LOWER CASE
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int len=0;
	for(int i=0;str[i]!='\0';i++) len++;
	for(int i=0;i<len;i++)
	{
		if(str[i]<97)
		str[i] += 32;
	}
	cout<<str;
}
