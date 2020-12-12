//Queue Practice
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> myQ;
	myQ.push(69);
	myQ.push(143);
	myQ.push(666);
	
	cout<<"Size of queue: "<<myQ.size()<<endl;
	
	while(!myQ.empty())
	{
		cout<<myQ.front()<<endl;
		myQ.pop();
	}
	cout<<"Size of queue: "<<myQ.size()<<endl;
	
}
