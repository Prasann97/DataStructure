#include <iostream>

using namespace std;
class Stack
{  public: 
    int *arr;
    int size,t1,t2;
    Stack(int n)
    {
        size=n;
        arr=new int[n];
        t1=-1;
        t2=size;
    }
    int isFull()
    {
        if(t1>=t2-1)
            return 1;
        else
    		return 0;
    }
        void push1()
    {
        if(isFull())
        {
            cout<<"Stack is full";
        }else
        {
            int temp;
            cout<<"enter element to insert ";
            cin>>temp;
            t1++;
            arr[t1]=temp;
    		
            cout<<"Item inserted succesfully ";
        }
    }
     void push2()
    {
        if(isFull())
        {
            cout<<"Stack is full";
        }else
        {
            int temp;
            cout<<"enter element to insert ";
            cin>>temp;
            t2--;
            arr[t2]=temp;
    		
            cout<<"Item inserted succesfully ";
        }
    }
        bool isEmpty()
    {
    	if(t1==-1 && t2==size)
    		return 1;
    	else
    		return 0;
    }
         void pop1()
    {
    	if(isEmpty())
    	{
    		cout<<"Stack is empty ";
    	}else
    	{
    		cout<<arr[t1]<<" ";
    		t1--;
    	}
    }
    void pop2()
    {
    	if(isEmpty())
    	{
    		cout<<"Stack is empty ";
    	}else
    	{
    		cout<<arr[t2]<<" ";
    		t2++;
    	}
    }
        
    void print1()
    {
    	for(int i=t1;i>=0;i--)
    	{
    		cout<<arr[i]<<" ";
    	}
    }
     void print2()
    {
    	for(int i=t2;i<size;i++)
    	{
    		cout<<arr[i]<<" ";
    	}
    }
};


int main()
{
    int size,choice;
    Stack s(5);
    
    do{
        cout<<"\n1.Push in stack1 : \n2.Push in stack2 : \n3.Pop1:  \n4.Pop2:\n5.Print 1 \n6.Print 2: \n0.Exit \n:";
        cin>>choice;
        
        switch(choice){
        case 1:
                s.push1();
                break;
        case 2:
                s.push2();
                break;
		case 3:
			s.	pop1();
				break;
		case 4:
			s.pop2();
				break;
		case 5:
				s.print1();
				break;
		case 6:
				s.print2();
				break;
		case 0:
				exit(0);
		}
    }while(choice!=0);

    return 0;
}

