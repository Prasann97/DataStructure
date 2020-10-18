#include<iostream>
using namespace std;
int Search(int a[],int size,int k)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(k==a[i])
		return (i+1);
	}
}
int main()
{
	int size,i,j,b,v;
	cout<<"Enter Size:";
	cin>>size;
	int a[size];
	for(j=0;j<=size-1;j++)
	{
		cout<<"Enter data at "<<j<<":";
		cin>>b;
		a[j]=b;
	}
	cout<<"Enter Value to be Searched:";
	cin>>v;
	cout<<Search(a,size,v);
}
