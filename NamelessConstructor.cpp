//Constructor destructor
#include <iostream>
using namespace std;

class t{
	int x;
	public:
		t(int n)
		{
			cout<<"Constructor Called\n";
			x=n;
		}
		~t()
		{
			cout<<"Destructor called\n";
		}
		void put()
		{
			cout<<"x="<<x<<endl;
		}
}; 
int main()
{
	t(5);
	t obj(6);
	obj.put();
	cout<<"END\n";
	return 0;
}
