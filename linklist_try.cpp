//Linked list
#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
void printlist(node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n = n->next;
	}
}
int main()
{
	node *head = NULL;
	node *first = NULL;
	node *second = NULL;
	
	head = new node();
	first = new node();
	second = new node();
	head->data = 1;
	head->next = first;
	first->data = 2;
	first->next = second;
	second->data = 3;
	second->next = head;
	printlist(head);
}
