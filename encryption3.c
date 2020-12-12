#include<stdio.h>
#include<conio.h>
#include<string.h>
char a[]="AyushJainEncryptionMethod";
int len,i,m,lenb,table[100],tablerev[100];
void main()
{
	
	len=strlen(a);
	printf("String name: %s \nlength of string: %d",a,len);
	//strrev(a);
	table[0]=0;
	tablerev[100]=200;
	for(m=0;m<100;++m)
	{
		table[m+1]=table[m]+2;
	}
	
	/*for(m=100;m>0;--m)
	{
		tablerev[m]=tablerev[m]-2;
		pri
	}
	*/
	
	for (i=0;i<len;++i)
	{
		a[i]=a[i]+table[i];
	}
	printf("\nTable: %d",tablerev[99]);
	
}
