#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class LinkedList
{
	public:
		struct node *root;
		
		void createLinkedList()
		{
			root=NULL;
		}
		void insertLeft(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->next=NULL;
			if(root==NULL)
			{
				root=n;
			}
			else
			{
				n->next=root;
				root=n;
			}
		}
		void insertRight(int e)
		{
			node *n,*t;
			n=new node;
			n->data=e;
			n->next=NULL;
			if(root==NULL)
			{
				root=n;
			}
			else
			{
				t=root;
				while(t->next!=NULL)
				{
					t=t->next;
				}
				t->next=n;
			}
		}
		void deleteLeft()
		{
			node *t;
			if(root==NULL)
			cout<<"List is Empty";
			else
			{
				t=root;
				root=root->next;
				cout<<"Deleted:"<<t->data;
				delete t;
			}	
		}
		void deleteRight()
		{
			node *t,*t2;
			if(root==NULL)
			{
				cout<<"List is Empty";
			}
			else
			{
				t=t2=root;
				while(t->next!=NULL)
				{
					t2=t;
					t=t->next;
				}
				t2->next=NULL;
				cout<<"Deleted:"<<t->data;
				delete t;
			}
		}
		void printList()
		{
			node *t;
			if(root==NULL)
			{
				cout<<"List is Empty";
			}
			else
			{
				t=root;
				while(t!=NULL)
				{
					cout<<t->data;
					t=t->next;
				}
			}
		}
		void deleteElement(int k)
		{
			node *t,*t2;
			if(root==NULL)
			{
				cout<<"List is Empty";
			}
			else
			{
				t=t2=root;
				while(t!=NULL && t->data!=k)
				{
					t2=t;
					t=t->next;
				}
				if(t!=NULL)
				{
					if(t==root)
					root=root->next;
					else if(t->next==NULL)
					t2->next=NULL;
					else
					{
						t2->next=t->next;
					}
					cout<<"Deleted:"<<t->data;
					delete t;
				}
				else
				{
					cout<<"Not Found";
				}
			}
		}	
		int search(int e)
		{
			node *t;
			if(root==NULL)
			{
				cout<<"Empty LinkedList";
				return 0;
			}
			else
			{
				t=root;
				while(t!=NULL)
				{
					if(t->data==e)
					{
						return e;
					}
					else
					{
						t=t->next;
					}
				}
				return 0;	
			}
		}
			
};

int main()
{
	cout<<"In Main";
	LinkedList l;
	l.createLinkedList();
	int c,a;
	do
	{
		cout<<"\n1.insertLeft: \n2.InsertRight \n3.deleteLeft\n4.deleteRight\n5.printList\n6.deleteElement\n7.search\n0:Exit\n:";
        cin>>c;
		switch(c)
		{
			case 1:
				cout<<"Enter Data:";
				cin>>a;
				l.insertLeft(a);
				break;
				
			case 2:
				cout<<"Enter Data:";
				cin>>a;
				l.insertRight(a);
				break;
				
			case 3:
				l.deleteLeft();
				break;
				
			case 4:
				l.deleteRight();
				break;
				
			case 5:
				l.printList();
				break;
				
			case 6:
				cout<<"Enter value to delete:";
				cin>>a;
				l.deleteElement(a);
				break;
				
			case 7:
				cout<<"Enter value to search:";
				cin>>a;
				cout<<l.search(a);
				break;
				
			case 0:
				cout<<"Exiting";
				break;
				
			default:
        		cout<<"Please select Valid Input";
        		break;
		}
	}
	while(c!=0);
}
