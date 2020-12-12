#include <iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		complex(int x,int y)
		{
			a = x;
			b = y;
		}
		void put()
		{
			cout<<a<<" + "<<b<<"i\n"; 
		}
		complex operator +(complex &obj)
		{
			complex temp;
			temp.a = a + obj.a;
			temp.b = b + obj.b;
			return temp;
		}
};
int main()
{
	complex a,b,c;
	a.get(3,4);
	b.get(4,5);
	c = a + b;
	c.put();
}
