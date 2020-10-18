/*
5 10 3 15 6
15 10 6 5 3			3 10 6 5 15
10 6 3 5 15			5 6 3 10 15
6 5 3 10 15			3 5 6 10 15
5 3 6 10 15			3 5 6 10 15
*/
#include<iostream>
using namespace std;
void HeapSort(int a[],int size)
{
	int i,j,pc,done,t;
	for(i=size-1;i>0;i--)//1
	{
		for(j=0;j<=i;j++)//0 1
		{
			pc=j;//1
			done=0;
			while(pc>0 && pc/2>=0 && done!=1)
			{
				if(a[pc/2]<a[pc])//15<6
				{
					t=a[pc/2];
					a[pc/2]=a[pc];
					a[pc]=t;
					pc=pc/2;//1
				}
				else
				done=1;
			}
		}
		t=a[i];
		a[i]=a[0];
		a[0]=t;
	}
}
int main()
{
	int size,i,j,b;
	cout<<"Enter Size:";
	cin>>size;
	int a[size];
	for(j=0;j<=size-1;j++)
	{
		cout<<"Enter data at "<<j<<":";
		cin>>b;
		a[j]=b;
	}
	HeapSort(a,size);
	for(i=0;i<=size-1;i++)
		{
			cout<<a[i]<<" ";
		}
}
