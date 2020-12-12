//Pipe And Cistern -Aptitude
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Switching\n";
	cout<<"1. Sample case one (Normal all 3 filling)\n";
	cout<<"2. Case two, two filling last empyting\n";
	int i;
	cin>>i;
	switch(i)
	{
	case 1:
		{
	cout<<"Enter the value of a b and c"<<endl;
	cin>>a>>b>>c;
	int Tu=a*b*c;
	int Au,Bu,Cu;
	Au=b*c;
	Bu=a*b;
	Cu=-(a*b);
	cout<<"Total time taken"<<endl;
	cout<<(Tu/(Au+Bu+Cu));
	break;
 	}
	case 2:
	{	
	cout<<"Enter the value of a b and c"<<endl;
	cin>>a>>b>>c;
	int Tu=a*b*c;
	int Au,Bu,Cu;
	Au=b*c;
	Bu=a*b;
	Cu=a*b;
	cout<<"Total time taken case2"<<endl;
	cout<<(Tu/(Au+Bu+Cu));
	break;
	}
	default:{
		cout<<"Invalid case\n";
		break;
	}
}
	return 0;
}
