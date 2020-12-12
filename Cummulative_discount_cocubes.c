//cummulative discounts
float Cummulative(float array[],int n)
{
	int i; float price=100,dprice=100,disper;
	for(i=0;i<n;i++){dprice=(dprice*(100-array[i])/100);}
	disper=price-((dprice*100)/100);
	return disper;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	float array[n];
	for(i=0;i<n;i++){scanf("%f",&array[i]);}
	float result=Cummulative(array,n);
	printf("%f",result);
	return 0;
}
