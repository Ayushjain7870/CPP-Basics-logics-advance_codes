#include<iostream>
using namespace std;
int main()
{
	char name[]="I HAVE REVERSED THE STRING HERE BUT WHAT HAPPENED IN THE INTERVIEW MAN?";
	int len=0;
	while(name[len]!='\0')len++;
	len--;
	while(len>=0){
		if(name[len]!=' ')
			cout<<name[len];
		else
			cout<<"+";
		len--;
	}
}
