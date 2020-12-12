#include <iostream>
using namespace std;
class test{
	int a,b;
	public:
		int z;
		test()
		{
			a =10;
			b = 22;
		}
		test(int x,int y)
		{
			a=x;
			b=y;
		}
		void put()
		{
			cout<<a<<" "<<b<<endl;
		}
		virtual void object() = 0;		

};
class derrived:public test{
	int z;
	public:
		derrived()
		{
			z=10;
		}
		void ot()
		{
			put();
			cout<<z<<endl;
		}
		void object()
		{
			cout<<z*z;
		}
		~derrived()
		{
			cout<<"\nDestructed\n";
		}
};

int main(int argc, char *argv[])
{
	for(int i=0;i<argc;i++)
		cout<<argv[i]<<endl;
	derrived d;
	d.ot();
	d.object();
	return 0;
	
}
