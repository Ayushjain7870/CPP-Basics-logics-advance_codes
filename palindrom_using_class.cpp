#include <iostream>
#include <stack>
#include <queue>
#include <string.h>
using namespace std;
struct stqu{
	stack<int> st;
	queue<int> qu;
}myData;
class inout{
	public:
		char word[10];
		char *add = &word[0];
		int len=0;
		inout()
		{
			cout<<"Constructer called"<<endl<<"Enter the word"<<endl;
			cin>>word;
			len=strlen(word);
		}
		
		void palindrome()
		{
			for(int i=0;i<len;i++)
			{
				cout<<"Data pushed: "<<word[i]<<endl;
				myData.qu.push(word[i]);
				myData.st.push(word[i]);
			}
		}
		void print()
		{
			for(int i=0;i<len;i++)
			{
				cout<<myData.qu.front();
				myData.qu.pop();
			}
		}
};
int main()
{
	inout obj;
	obj.palindrome();
	obj.print();
}
