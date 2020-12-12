//Stack and queue
#include<iostream>
#include<stack>
#include<queue>
#include<string.h>
using namespace std;
int main()
{
	bool isPalindrome=false;
	stack<char> st;
	queue<char> q;
	
	char c[10];
	cin>>c;
	
	for(int i=0;i<strlen(c);i++)
	{
		st.push(c[i]);
		q.push(c[i]);
	}
	
	for(int i=0;i<strlen(c);i++)
	{
		if(st.top()==q.front())
		isPalindrome=true;
		else
		isPalindrome=false;
	}
	if(isPalindrome)
	cout<<"Palindrome \n";
	else
	cout<<"Not";
	return 0;
}
