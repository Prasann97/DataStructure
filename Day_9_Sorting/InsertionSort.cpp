/*
6 2 5 1 3
2 6 5 1 3
2 5 6 1 3
1 2 5 6 3
1 2 3 5 6
*/
#include<iostream>
using namespace std;
void InsertSort(int a[],int size)
{
	int i,j,newelement;
	for(i=0;i<size-1;i++)
	{
		j=i+1;//4
		newelement=a[j];//3
		while(j>0 && newelement<a[j-1])//3<2
		{
			a[j]=a[j-1];
			j--;//2
		}
		a[j]=newelement;
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
	InsertSort(a,size);
	for(i=0;i<=size-1;i++)
		{
			cout<<a[i]<<" ";
		}
}
