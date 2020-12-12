//pie chart 
#include <iostream>
using namespace std;
int n=5,tot=360;
class pieChart{
		int a[5],re[5];
public:
	
	pieChart()
	{
	
		cout<<"Contruction\n";
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		re[i]=tot/a[i];
	}
	void setVal(int total,int ele)
	{
		tot=total;
		n=ele;
	}
	void put()
	{
		cout<<"Total= "<<tot<<endl;
		for(int i=i;i<=n;i++)
		cout<<"part "<<i<<" is "<<re[i-1]<<"%"<<endl;
	}
	~pieChart()
	{
		cout<<"Destruction\n";
	}
};
int main()
{
	pieChart obj;
	obj.put();
	return 0;
}
