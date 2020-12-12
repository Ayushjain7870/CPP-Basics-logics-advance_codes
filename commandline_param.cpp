//Command Line
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	cout<<"TOTAL = "<<argv<<endl;
	for(int i=0;i<argc;i++)
	{
		cout<<argv[i]<<endl;
	}
}
