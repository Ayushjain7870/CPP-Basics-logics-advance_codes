//Vovels
#include <iostream>
#include <cstring>
using namespace std;
bool check(char a)
{
	if(a==' '||a=='a'||a=='o'||a=='i'||a=='e'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	string op;
	int a=0,len=0;
	char s[] = "I am a very good boy. I like to dance and eat pizza! Please tell me about your hobbies.";
	len = strlen(s);
	for(int i=0;i<len;i++)
	{
		if(i<len && check(s[i]))
		{
			op[a]=s[i];
			a++;
		}
		else
		{
			op[a+1]='\0';
		}
	}
	cout<<"string lenght: "<<a<<endl;
	for(int i=0;i<a;i++)
	cout<<op[i];
	cout<<"\nOVER";
	return 0;
}
