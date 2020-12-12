//operator
#include <iostream>
using namespace std;

class complex{
	int real, comp;
	public:
		complex(int x=0,int y=0)
		{
			real = x;
			comp = y;
		}
		void pr()
		{
			cout<<real<<"+"<<comp<<"i";
		}
		complex operator -(complex &obj)
		{
			complex temp;
			temp.real = obj.real - real;
			temp.comp = obj.comp - comp;
			return temp; 
		}
};
int main()
{
	complex a(40,30),b(20,10),c(0,0);
	c = a - b;
	c.pr();
}

