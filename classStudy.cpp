#include<iostream>
using namespace std;
class Person
{
	protected:
		int ay=69;
	private:
		int ays=69;
	public:
	int age(int age_is);
	int height(float height_is);
	int weight(float weight_is);

};
Person::age(int age_is)
{
	cout<<"Age is = "<<age_is<<endl;
//	return age_is;
}
Person::height(float height_is)
{
	cout<<"Height is = "<<height_is<<endl;
}
Person::weight(float weight_is)
{
	cout<<"Weight is = "<<weight_is<<" private= "<<ay<<endl;
}
int main()
{
	int a;
	float h,w;
	cin>>a>>h>>w;
	system("CLS");
	Person ayush;
	ayush.age(a);
	ayush.height(h);
	ayush.weight(w);
	return 0;
}

