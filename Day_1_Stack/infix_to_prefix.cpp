#include<iostream>
#include<string.h>
using namespace std;
char s[100];
int maxsize,tos;
void stack(int n)
{
	maxsize=n;
	tos=-1;
}
void push(char e)
{
	tos++;
	s[tos]=e;
}
char pop()
{
	char temp;
	temp=s[tos];
	tos--;
	return temp;
}
int isEmpty()
{
	if(tos==-1)
		return 1;
	else
		return 0;
}
int Preced(char c)
{
	if(c=='+'||c=='-')
		return 1;
	if(c=='*'||c=='/'||c=='%')
		return 2;
	if(c=='^')
		return 3;
	else
		return 0;
}
int main()
{
	char inFx[100],preFx[100],c;
	int pi=0,i;
	cout<<"Enter Infix: ";
	cin>>inFx;//a+b
	int k=strlen(inFx);
	stack(k);
	
	for(int i=strlen(inFx);i>=0;i--)
	{
		c=inFx[i];//b,a
		switch(c)
		{
			case ')':
				push(c);
				break;
			
			case '(':
				while(s[tos]!=')')
				{
					preFx[pi]=pop();
					pi++;
				}
				c=pop();
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				while((Preced(s[tos])>=Preced(c)) && (isEmpty()!=1))
				{
					preFx[pi]=pop();
					pi++;	
				}
				push(c);//+
				break;
			default:
				preFx[pi]=c;//0=b,1=a
				pi++;
				break;
		}
	}
	while(isEmpty()!=1)
	{
		preFx[pi]=pop();//2=+
		pi++;
	}
	
	for(i=pi;i>=0;i--)
	{
		cout<<preFx[i];//+ab
	}
}