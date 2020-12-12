//OPERATOR MINUS

#include <iostream>
using namespace std;


class family{
		int a;
	public:
		family(int z)
		{
			a = z;
		}
		family operator -(family &obj)
		{
			family temp;
			temp.a = obj.a - obj.a;
			return temp;
		}
		void op()
		{
			cout<<a;
		}
};

int main()
{
	family ov(10);
	ov = -ov;
	ov.op();
}
