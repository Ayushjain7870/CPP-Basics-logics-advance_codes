/*Pattern Making
1
1 1
1 2 1
1 2 2 1
1 2 2 2 1
1 1 1 1 1 1
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	bool isLast=false;
	cin>>num;
	system("CLS");
	for(int i=0;i<num;i++)
	{
		if(i==num-1)isLast=true;
		for(int j=0;j<=i;j++)
		{
			if(!isLast)
			{
				if(j==0||j==i)cout<<"1 ";
				else cout<<"2 ";
			}
			else cout<<"1 ";
		}
		cout<<endl;
	}
	
}
