#include<iostream>
using namespace std;
class algebra{
	int inp1,inp2;
	public:
		int sum(float a,float b){
			int summ=a+b;
			cout<<"addition= "<<summ;
		}
		int sub(float c,float d){
			int subb=c-d;
			cout<<"subtraction= "<<subb;
		}
		int mul(float e,float f){
			int mull=e*f;
			cout<<"Multiplication= "mull;
		}
		int div(float h,float g){
			int divv=h/g;
			cout<<"Division= "<<divv;
		}
};

int main(){
	float inp1,inp2;
	int sel;
	cout<<"Enter the first number\n";
	cin>>inp1;
	cout<<"select operation 1 for add 2 for sub 3 for mul 4 for div\n";
	cin>>sel;
	cout<<"enter second number\n";
	cin>>inp2;
	algebra a;
	algebra b;
	algebra c;
	algebra d;
	switch(sel)
	{
	case 1:{
			a.sum(inp1,inp2);
		break;
	}

	case 2:{
		
	b.sub(inp1,inp2);
	
		break;
	}
	case 3:{
	c.mul(inp1,inp2);
		break;
	}
	
	case 4:{
	d.div(inp1,inp2);
		break;
	}
	
}
	
	system("pause");
}
