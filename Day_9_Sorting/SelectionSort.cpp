/*
6 2 5 1 3 min=1
1 2 5 6 3
1 2 5 6 3 min=3
1 2 3 6 5 min=5
1 2 3 5 6
*/
#include<iostream>
using namespace std;
void SelectionSort(int a[],int size)
{
	int min,pos,i,j;
	for(i=0;i<size;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=min;
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
	SelectionSort(a,size);
	for(i=0;i<=size-1;i++)
		{
			cout<<a[i]<<" ";
		}
}
