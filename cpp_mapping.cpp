#include <iostream>
#include <cstring>
#include <iterator>
#include <map>

using namespace std;
void printarr(int *arr, int len)
{
	for(int i = 0; i<len ; i++)
	cout<<arr[i]<<" ";
}
int maxim(int *arr, int len)
{
	//-1,-2,-3,-4,-5
	len--;
	int biggest = -1000;
	for(int i=0;i<len;i++)
	{
		if(arr[i]>arr[i+1])
		{
			if(biggest<arr[i])
			{
				biggest = arr[i];
			}
		}
		else
		{
			if (biggest < arr[i+1])
			{
				biggest = arr[i+1];
			}
		}
	}
	return biggest;
	
}
void sleep(long double a)
{
	for(long double i=0;i<(200000000*a);i++){}
}
int main()
{
	//making a template for dictionary(map)
	
	map <int, string> dictonary;
	map <int, string> :: iterator itr;
	
	dictonary.insert(pair<int, string>(1,"MP"));
	dictonary.insert(pair<int, string>(2,"UP"));
	dictonary.insert(pair<int, string>(3,"CG"));
	dictonary.insert(pair<int, string>(4,"HR"));
	dictonary.insert(pair<int, string>(5,"RJ"));
	
	for(itr = dictonary.begin();itr != dictonary.end();++itr)
	cout<<itr->first<<" : "<<itr->second<<endl;
	
	int feed[2][5]={{1,1,2,2,3},{2,1,2,3,5}};
	
	//calcualting output
	
	for(int i=0;i<2;i++)
		{	for(int j=0;j<5;j++)
			{
				if(j==0 && feed[i][j])
				cout<<feed[i][j]<<" ";
			}
			cout<<endl;
		}
	
	int rating[6]={0,0,0,0,0};
	int res = maxim(rating, 6);
	cout<<"Maximum is = "<<res<<endl;
	printarr(rating, 6);

	
	
	return 0;
}
