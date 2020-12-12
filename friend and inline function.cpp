//friend and inline function
#include <iostream>
using namespace std;
class test{
	int a;
	public:
		friend void meta(test o);
		void set(){a=10;}
};

inline int srq(int z) {return z*z;}

void meta(test o)
{
	cout<<o.a<<endl;
	cout<<"Sqr "<<srq(o.a);
}

int main()
{
	test t;
	t.set();
	meta(t);
	return 0;
}
