#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;
int anagram()
{
	char str[] ="145412";
	int len = strlen(str);
	stack<int> s;
	queue<int> q;
	for(int i=0;i<len;i++)
	{
		s.push(str[i]);
		q.push(str[i]);
	}
	int r=0;
	for(int i=0;i<len;i++)
	{
		if(s.top() != q.front())
			r = 1;
		s.pop();
		q.pop();
	}
	r = r>0 ? r=1:r=0;
	return r;
}
int main()
{
	if(!anagram())
		cout<<"Yes";
	else
		cout<<"No";
}

