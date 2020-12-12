#include <iostream>
using namespace std;
class minuss{
		int num;
	public:
		minuss(int x=0)
		{
			num = x;
		}
		void pr()
		{
			cout<<num;
		}
		minuss operator -(minuss const &obj)
		{
			minuss temp;
			temp.num = obj.num - 1;
			return temp.num;
		}	
};

int main()
{
	minuss f(10), res(10);
	res = f-f;
	res.pr();
}
