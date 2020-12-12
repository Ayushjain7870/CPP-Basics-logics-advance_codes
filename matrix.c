//2-D matrix
#include<stdio.h>
int main()
{
	int i,j,rows,colm;
	scanf("%d%d",&rows,&colm);
	int mat[rows][colm]={{1,2,3,4},{4,5,6,7},{7,8,9,9},{6,6,9,9}};
	/*
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			scanf("%d",&mat[i][j]);
			
		}
		
	}
	system("CLS");
	*/
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("%d ",mat[i][j]);
			if(j==colm-1)printf("\n");
		}
	}
}
