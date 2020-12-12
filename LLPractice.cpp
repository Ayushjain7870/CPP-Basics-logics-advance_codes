#include <bits/stdc++.h>
using namespace std;
struct node
{
	int value;
	node* next;
};
node* add(node** reference, int data)
{
	node* temp = new node();
	temp->value = data;
	temp->next = (*reference);
	(*reference) = temp;
}
void print(node* reference)
{
	while(reference->next!=NULL)
	{
		cout<<reference->value<<endl;
		reference = reference->next;
	}
}
int main()
{
	node* list=NULL;
	list = new node();
	for(int i=1;i<=10;i++)
		add(&list, i*2);
	
	print(list);
}
