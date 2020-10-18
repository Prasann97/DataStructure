#include<iostream>
using namespace std;

void QuickSort(int start,int end,int a[])
{
	int i,j,pivot,t;
	i=start;
	j=end;
	pivot=start;
	pivot=start;
	while(i<j)
	{
		/*while(a[i]<a[pivot])
		{
			i++;
		}*/
		while(a[j]>a[pivot])
		{
			j--;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	if(i<end)
	{
		return(QuickSort(i+1,end,a));
	}
	/*if(start<j)
	{
		return(QuickSort(start,j-1,a));
	}*/
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
	QuickSort(0,size-1,a);
	for(i=0;i<=size-1;i++)
		{
			cout<<a[i]<<" ";
		}
}
