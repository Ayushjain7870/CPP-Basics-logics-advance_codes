#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len,i;
	char pswrd[]="";
	printf("Enter your password\n");
	scanf("%s",&pswrd);
	len=strlen(pswrd);
	for(i=0;i<len;++i)
	{
		pswrd[i]=pswrd[i]+1;
	}
	printf("\nEncrypted string: %s",pswrd);
	
	
	for(i=0;i<len;++i)
	{	
		pswrd[i]=pswrd[i]-1;
	}
	
	printf("\n Decrypted string:%s",pswrd);
}
