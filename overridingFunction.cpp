#include <iostream>
using namespace std;
class override{
	private:
		int pri;
	protected:
		int pro;
	public:
		int pub;
		override()
		{
			pri = 69;
			pro = 69;
			pub = 69;
		}
		override(int x,int y,int z)
		{
			pri = x;
			pro = y;
			pub = z;
		}
		void pr()
		{
			cout<<"Normal Function";
		}
		void dis()
		{
			cout<<pri<<pro<<pub;
		}
};
class der:public override{
	int a;
	public:
		void pr()
		{
			cout<<"Overriden Function";

		}
};

int main()
{
	override obj;
	obj.pr();
	obj.dis();
	der i;
	cout<<i.pub;
}
