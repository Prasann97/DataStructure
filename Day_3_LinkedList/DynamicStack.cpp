#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class DynamicStack
{
	public:
		node *tos;
		void createStack()
		{
			tos=NULL;
		}
		void push(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->next=NULL;
			if(tos==NULL)
			tos=n;
			else
			{
				n->next=tos;
				tos=n;
			}
		}
		void pop()
		{
			node *t;
			if(tos==NULL)
			cout<<"Empty Stack";
			else
			{
				t=tos;
				tos=tos->next;
				cout<<"Popped:"<<t->data;
				delete t;
			}
		}
		void PrintStack()
		{
			node *t;
			t=tos;
			while(t!=NULL)
			{
				cout<<t->data;
				t=t->next;
			}
		}
		int search(int e)
		{
			node *t;
			if(tos==NULL)
			{
				cout<<"Empty Stack";
				return 0;
			}
			else
			{
				t=tos;
				while(t!=NULL)
				{
					if(t->data=e)
					return e;
					else
					t=t->next;
				}
			}
			return 0;
		}
};
int main()
{
	DynamicStack d;
	d.createStack();
	int c,a;
	do
	{
		cout<<"\n1.push: \n2.pop \n3.printstack\n4.search\n0:Exit\n:";
        cin>>c;
		switch(c)
		{
			case 1:
				cout<<"Enter data:";
				cin>>a;
				d.push(a);
				break;
			
			case 2:
				cout<<"popped:";
				d.pop();
				break;
				
			case 3:
				d.PrintStack();
				break;
				
			case 4:
				cout<<"Enter element to search:";
				cin>>a;
				cout<<d.search(a);
				break;
				
			case 0:
				cout<<"Exiting";
				break;
				
			default :
				cout<<"Enter valid input:";
				break;
		}
	}
		while(c!=0);
}
