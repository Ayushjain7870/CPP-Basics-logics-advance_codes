//Cummulative discounts
#include<stdio.h>
int main()
{
	int n,i;
	float dis_price=100,price=100,dis_perc=0;
	//scanf
	
	printf("Number of percentages\n");
	scanf("%d",&n);
	float arrm[n];
	for(i=0;i<n;i++)
	{
		scanf("%f",arrm[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&arrm[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		dis_price=(dis_price*(100-arrm[i])/100);
	}
	//price=price-dis_price;
	dis_perc=price-((dis_price*100)/100);
	printf("%f",dis_perc);
	
	return 0;
}
