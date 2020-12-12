#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char pwd[]="ayushjain",plus[]="1";
	
	int len,i;
	len=strlen(pwd);
	for(i=0;i<len;i++)
	{
		if(pwd[i]>=97&&pwd[i]<=122)
		pwd[i]=pwd[i]+plus[i];
	}
	printf("\nEncrypted String: %s",pwd);
	for(i=0;i<len;i++)
	{
		pwd[i]=pwd[i]-plus[i];
	}
	printf("\nDecrypted: %s",pwd);
	
}
