#include<iostream>
using namespace std;
int Q[100];
int rear,front,maxsize;
void createqueue(int size)
{
	maxsize=size;
	front=0;
	rear=-1;
}
void Enqueue(int e)
{
	int i,j,t;
	rear++;
	Q[rear]=e;
	for(i=front;i<rear;i++)
	{
		for(j=front;j<rear;j++)
		{
			if(Q[j]<Q[j+1])
			{
				t=Q[i];
				Q[i]=Q[j+1];
				Q[j+1]=t;
			}
		}
	}
}
int Dequeue()
{
	int temp;
	temp=Q[front];
	front++;
	return temp;
}
int isFull()
{
	if(rear==maxsize-1)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(front>rear)
	return 1;
	else
	return 0;
}
void printqueue()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		cout<<Q[i]<<" ";
	}
}

int main()
{
	int a,i,b,e;
	cout<<"Enter no:";
	cin>>a;
	createqueue(a);
	do
	{
	cout<<"\n1.Enqueue: \n2.Dequeue \n3.isFull\n4.isEmpty\n5.printqueue\n0:Exit\n:";
		cin>>b;
		switch(b)
		{
			case 1:
			if(isFull()==1)
            cout<<"Full";
            else
            {
                cout<<"Enter data:";
                cin>>e;
                Enqueue(e);
            }
			break;
			
			case 2:
			Dequeue();
			break;
			
			case 3:
			if(isFull()==1)
			cout<<"Full";
			else
			cout<<"Not Full";
			break;
			
			case 4:
			if(isEmpty()==1)
			cout<<"Empty";
			else
			cout<<"Not Empty";
			break;
			
			case 5:
			printqueue();
			break;
			
			case 0:
			cout<<"Exiting";
			break;
		}
	}
	while(b!=0);
}
