#include<stdio.h>
int main()
{
	int i=0,j=0,rows,space=0;
	rows=5;
	printf("Type 1\n");
 	for(i=0;i<rows;i++)
 	{
 		for(j=0;j<=i;j++)
 		{
 			printf("*");
		}
		printf("\n");
	}
	printf("\nType 2\n\n");
	for(i=rows;i>=0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("\nType 3-Full Pyramid\n\n");
	for(i=1;i<=rows;++i,j=0)
	{
		for(space=i;space<=rows-1;++space)
		{printf(" ");}
		
		while(j!=2*i-1)
		{printf("*");++j;}
		
		printf("\n");
	}
	printf("\nType 4\n\n");
	int num=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",num);
			num++;
			if(num>9)num=0;
		}
		printf("\n");
	}
	num=space=i=j=0;
	printf("\nType 5-Full Pyramid Numbers\n\n");
	for(i=1;i<=rows;++i,j=0)
	{
		for(space=i;space<=rows-1;++space)
		{printf(" ");}
		
		while(j!=2*i-1)
		{printf("%d ",num);
		++j;
		num++;
		if(num>9)num=0;
		}
		
		printf("\n");
	}
}
