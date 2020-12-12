//normal password decryptor
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string pa="AYUSH",in="AAAAA",mat;
	int mt=0,len=pa.size();
	cout<<pa.size()<<endl;
	for(int i=0;i<len;i++)
	{
		(int)in[i]++;
	}
	/*for(int i=0;i<len;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(in[j]==pa[i])
			{
				mat[mt]=in[j];
				mt++;
			}
			(int)in[j]++;
		}
	}*/
	cout<<"DECRYPTED: "<<in;
}
