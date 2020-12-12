//Code Written by Ayush Jain
//It can decrypt the numerical passwords
#include<bits/stdc++.h>
using namespace std;

/*Declaring check function to check the generated string is same as the desired
or not*/
bool check(string a,string b)
{
	bool ans=false;
	int i=0;
	//	Starting
	while(a[i]!='\0')
	{
		if(a[i]==b[i])
		{
			ans = true;
		}
		else
			ans = false;
		i++;
	}
	//ending
	return ans;
}

int main()
{	
	//Declaring original password to test the code
	string arr="172962420";
	//Finding the length of the actual string just to save up some time
	//In real decryption remove the lenght part and implement just the expected value
	int len = arr.length();
	string dec;
	//Generating string of the same length as of string password
	for(int i=0; i<len; i++)
		dec[i]='0';
	bool isTrue = false;
	
	cout<<"Starting\n";
	while(!isTrue) 
	{
		isTrue = false;
		for(int i=0; i<len; i++)
		 {
			for(int j=i; j<len; j++) 
			{
				//Incrementing just by 1 to evaluate all possible values
				if(dec[j]!=arr[j])
					dec[j]+=1;
			}
		}
		//if false then repeat this process else we got the correct answer
		isTrue = check(arr, dec);
	}
	cout<<"Decrypted Password\n";
	for(int p=0; p<len; p++)
		cout<<dec[p];
	/*If the process terminates with return value other than zero than there might be
	some issue with the entered password.
	Remember this code can only decrypt the numerical passwords else passed value will 
	Generate error or it might get stuck in the while loop.
 	*/
	return 0;
}
