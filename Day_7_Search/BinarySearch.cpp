#include<iostream>
using namespace std;
int BinarySearch(int a[],int size,int start,int end,int k)
{
	if(start==end)
	{
		if(k==a[start])
		return start;
		else
		return -1;
	}
	else
	{
		int mid=(start+end)/2;
		if(k==a[mid])
		return mid;
		else
		{
			if(k<a[mid])
			BinarySearch(a,size,start,mid,k);
			else
			BinarySearch(a,size,mid+1,end,k);
		}
		
	}
}
int main()
{
	int size,j,b,e,pos;
	cout<<"Enter Size:";
	cin>>size;
	int a[size];
	for(j=0;j<=size-1;j++)
	{
		cout<<"Enter data at "<<j<<":";
		cin>>b;
		a[j]=b;
	}
	cout<<"Enter Element to be search:";
	cin>>e;
	pos=BinarySearch(a,size,0,size-1,e);
	if(pos==-1)
	cout<<"Element Not Found";
	else
	cout<<pos+1;
}

