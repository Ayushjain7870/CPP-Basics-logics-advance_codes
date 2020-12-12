#include<conio.h>
#include<stdio.h>
#include<string.h>

char encr(char);
void getpass();
void putpass();
int main()
{
	char a[]="",pass[]="";
	a[]=getpass();
	pass[]=encr(a);
	putpass();
}

void getpass()
{
	printf("Enter your password\n");
	char a[]="";
	scanf("%s",&a);
	return a;
}

char encr(char a)
{
	char _a[]="";
	_a=a;
	int i,len;
	len=strlen(_a);
	for(i=0;i<len;i++)
	{
		_a[i]=_a[i]+1;	
	}
	return _a;
}
void putpass()
{
	printf("\nEncrypted password is %s",pass);
}
