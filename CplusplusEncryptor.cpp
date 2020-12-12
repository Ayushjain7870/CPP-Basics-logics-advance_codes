#include<iostream>
#include<string.h>
using namespace std;
char encryptor(char password[]);
int main()
{
	char password[]="";
	cout<<"Enter your password"<<endl;
	gets(password);
	cout<<"Your password is ";
	puts(password);
	encryptor(password[]);
}

char encryptor(char password[])
{
	char _password[]=""
	_password=password;
	cout<<"Enc fun"<<_password[]<<endl;
}
