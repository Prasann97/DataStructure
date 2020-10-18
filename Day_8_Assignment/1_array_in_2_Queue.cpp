#include<iostream>

using namespace std;

int s[100],maxSize,f1,f2,r1,r2;

void queueInit(int size)
{
	maxSize=size;
	f1=0;
	r1=-1;
	f2=size-1;
	r2=size;
}
void enqueu1()
{
	if(r1<r2-1)
	{		
		int e;
		cout<<"\n Enter an element ";
		cin>>e;
		r1++;
		s[r1]=e;
	}
	else
	{
	   cout<<"Queue is full"; 
	}
}
void enqueu2()
{
	if(r1<r2-1)
	{		
		int e;
		cout<<"\n Enter an element ";
		cin>>e;
		r2--;
		s[r2]=e;
	}
	else
	{
	   cout<<"Queue is full"; 
	}
}
void dequeue1()
{
	if(f1<=r1)
	{
		cout<<s[f1];
		f1++;
	}else
	{
	    cout<<"Queue is empty";
	}
}
void dequeue2()
{
	if(f2>=r2)
	{
		cout<<s[f2];
		f2--;
	}else
	{
	    cout<<"Queue is empty";
	}
}
 void print()
 {
		for(int i=f1;i<=f2;i++)
		 {
			 cout<<" "<<s[i];
		 }
 }


int main()
{
	int size,ch;
	cout<<"Enter size of the array ";
	cin>>size;
	queueInit(size);

	do{
		cout<<"\n1.Enqueue 1\n2.Enqueue 2 \n3.Dequeue 1 \n4.Dequeue 2  \n5.printqueue \n0.Exit	";
		cin>>ch;
		switch(ch)
		{
		case 1:
			enqueu1();
			break;
		case 2:
			enqueu2();
			break;
		case 3:
			dequeue1();
			break;
		case 4:
			dequeue2();
			break;
		case 5:
			print();
			break;
		case 6:
		    exit(0);
		}	
	}while(ch!=0);

}

