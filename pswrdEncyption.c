#include<stdio.h>
#include<conio.h>
#include<string.h>
char recString[]="",string[]="",mStr[]="AYUSHJAIN";
int len,i;
void main()
{
	printf("Rules for entering password\n1. No space allowed\n2. Allowed special characters @ ^ %\n");
	printf("Enter password\n");
	scanf("%s",&string);
	//ENCYPTION METHOD WITH NUMBERS
	
	printf("\nEntered password: %s\n",string);
	
	len=strlen(string);
	
	
	//CHECKING FOR DIGITS
	/* Alphabet check */
	for(i=0;i<len;++i)
	{
    	if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
    	{
    		if(string[i]%2==0)
    		{
    			string[i]=string[i]+1;
			}
			else
			{
				string[i]=string[i]+2;
			}
        	//printf("'%c' is alphabet.\n", string[i]);
    	}
    	else if(string[i] >= '0' && string[i] <= '9')
    	{
    		if(string[i]%2==0)
    		{
    			string[i]=string[i]+2;
			}
			else
			{
				string[i]=string[i]+1;
			}
        //printf("'%c' is digit.\n", string[i]);
    	}
    	else 
    	{
    		string[i]=string[i]-4;
        	//printf("'%c' is special character.\n", string[i]);
    	}
	}
	
	printf("\nEncrypted password: %s",string);
	
	
//	len=len-10;
	//Begin decryption
	for(i=0;i<len;++i)
	{
    	if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
    	{
    		if(string[i]%2==0)
    		{
    			string[i]=string[i]-1;
			}
			else
			{
				string[i]=string[i]-2;
			}
        	//printf("'%c' is alphabet.\n", string[i]);
    	}
    	else if(string[i] >= '0' && string[i] <= '9')
    	{
    		if(string[i]%2==0)
    		{
    			string[i]=string[i]-2;
			}
			else
			{
				string[i]=string[i]-1;
			}
        //printf("'%c' is digit.\n", string[i]);
    	}
    	else 
    	{
    		string[i]=string[i]+4;
        	//printf("'%c' is special character.\n", string[i]);
    	}
	}
	printf("\nDecrypted password: %s",string);
	
}
