#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<int, int> name;
	name.insert(pair<int,int>(1,4));
	name.insert(pair<int,int>(2,3));
	name.insert(pair<int,int>(3,1));
	name.insert(pair<int,int>(4,2));
	name.insert(pair<int,int>(5,3));
	
	map<int,int> ::iterator itr;
	for(itr = name.begin();itr!=name.end();++itr)
		cout<<itr->first<<" "<<itr->second<<endl;
}
