#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class DynamicQueue
{public:
	node *front ,*rear;
	void createQueue()
	{
		rear=front=NULL;
	}
	void Enqueue(int e)
	{
		node *n;
		n=new node;
		n->data=e;
		n->next=NULL;
		if(rear==NULL)
		rear=front=n;
		else
		{
			rear->next=n;
			rear=n;
		}
	}
	void Dequeue()
	{
		node *t;
		if(front==NULL)
		cout<<"Empty Queue";
		else
		{
			t=front;
			front=front->next;
			cout<<"Dequeue"<<t->next;
			delete t;
		}
	}
	void PrintQueue()
	{
		node *t;
		if(front==NULL)
		cout<<"Empty Queue";
		else
		{
			t=front;
			while(t!=NULL)
			{
				cout<<t->data;
				t=t->next;
			}
		}
	}
	int search(int e)
	{
		node *t;
		if(front==NULL)
		{
			cout<<"Empty Queue";
			return 0;
		}
		else
		{
			t=front;
			while(t!=NULL)
			{
				if(t->data==e)
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
	DynamicQueue q;
	q.createQueue();
	int c,a;
	do
	{
		cout<<"\n1.Enqueue:\n2.Dequeue\n3.printQueue\n4.search\n0.Exit\n";
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"Enter data:";
				cin>>a;
				q.Enqueue(a);
				break;
				
			case 2:
				q.Dequeue();
				break;
				
			case 3:
				q.PrintQueue();
				break;
				
			case 4:
				cout<<"Enter calue to search:";
				cin>>a;
				cout<<q.search(a);
				break;
				
			case 0:
				cout<<"Exiting";
				break;
			
			default:
				cout<<"Input is invalid";
				break;
		}
	}
	while(c!=0);
}
