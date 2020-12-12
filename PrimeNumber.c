#include<stdio.h>
int main()
{
	int i,j,k,ra;
	ra=12;
	for(i=2;i<ra;i++)
	{
		for(j=2;j<i/2;j++)
		{
			if(i%j != 0)
			{
				printf("Number %d\n",i);
				k++;
			}
		}
	}
	printf("Total %d",k);
	return 0;
}
