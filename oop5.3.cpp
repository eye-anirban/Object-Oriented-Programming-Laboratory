#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

class Linked_list
{
	private:
		node *head,*tail;
	public:
	    Linked_list()
	    {
	    	head=NULL;
	    	tail=NULL;
		}
		
		void add_node(int n)
		{
			node *tmp=new node;
			tmp->data=n;
			tmp->next=NULL;
			
			if(head==NULL)
			{head=tmp;
			  tail=tmp;
			}
			else
			{tail->next=tmp;
			 tail=tail->next;
			}
		}
		void print()
		{
	if (head == NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else{
		node *tmp = head;
		cout<<"Linked List: ";
		while (tmp != NULL){
			cout<<tmp->data<<"->";
			tmp = tmp->next;
		}
		cout<<"NULL"<<endl;
	}
}
};

int main()
{   int n,p=0;
	Linked_list a;
	m :
		cout<<"Do you want to add an element?\nEnter 1 or 0\n";
		cin>>n;
		if(n==1)
		{
			cout<<"Enter the element\n";
			cin>>p;
			a.add_node(p);
			p=0;
			goto m;
	    }
	    else cout<<"\n Your list is :";
	    a.print();
}
















