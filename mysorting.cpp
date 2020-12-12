//Merge sort 
#include <iostream>
using namespace std;
int time = 0;
void ayushsort(int *arr, int len, int *oparr)
{
	
	int temp = 0;
	for(int i=0;i<len;i++)
	{
		temp = arr[i];
		oparr[temp] = temp;
		time += 3;
	}
}
int main()
{
	int oparr[10] = {0,0,0,0,0,0,0,0,0,0};
	int arr[10]= {1,3,5,7,9,5,6,4,2,6};
	ayushsort(arr, 10, oparr);
	for(int i=0;i<10;i++)
	{
		cout<<oparr[i];
		time += 2;	
	}
	cout<<"\nTime Eclapsed11:"<<time;
}
