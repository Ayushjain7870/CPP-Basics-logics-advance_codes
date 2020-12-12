#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int pwd[]={9},test[]={1,2,3,4,5,6,7,8,9,0};
	//Password hindering
	printf("%d: Entered password\n",pwd[0]);
	int i;
	for(i=0;i<10;++i)
	{
		if(pwd[i]==test[i])
		printf("\nDetected password: %d\n",pwd[i]);
		else
		printf(".");
	}
}
