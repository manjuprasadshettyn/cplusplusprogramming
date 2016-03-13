#include<iostream>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 20
using namespace std;

class stack
{
int top;
int a[MAX];
public:
	stack();
	void push(int);
	int pop();
	int evaluate();
};

stack::stack()
{
top=-1;
}

void stack::push(int val)
{
  if(top==MAX-1)
  {
	cout<<"Stack is Full"<<endl;
  }
  else
  {
	top++;
	a[top]=val;
   }
}

int stack::pop()
{
  if(top==-1)
  {
	cout<<"Wrong expression\n";
  }
  else
  {
	int item=a[top];
	top--;
	return item;
  }
  return 0;
}

int stack::evaluate()
{
char post[MAX];
int op1,op2,val;

cout<<"Enter postfix expression\n";
cin>>post;
for(int i=0;post[i]!='\0';i++)
{

   if(isdigit(post[i]))
		push(post[i]-48);
  else if(isalpha(post[i]) )
  {
	int n;
	cout<<"Enter value for "<<post[i]<<endl;
	cin>>n;
	push(n);
  }
  else
  {
	op2=pop();
	op1=pop();
	switch(post[i])
	{
		case '+': val=op1+op2;
                     break;
		case '-': val=op1-op2;
                    break;
		case '*': val=op1*op2;
                    break;
		case '/': val=op1/op2;
                    break;
		case '^':
		case '$': val=pow(op1,op2);
                    break;
		case '%': val=op1%op2;
                    break;
		default: cout<<"Invalid opearator"<<endl;
                     exit(0);
        }
	push(val);
  }
}
int ans;
ans=pop();
if(top!=-1)
{
    cout<<"Wrong expression!!"<<endl;
    exit(0);
}
return ans;
}

int main()
{
int result;
char choice;
stack s;
do
{
result=s.evaluate();
cout<<"answer is "<<result;
cout<<endl<<"----------------------------------"<<endl;
cout<<"\nDo you want to continue? (Y/y)"<<endl;
cin>>choice;
}while(choice=='Y' || choice=='y');
return 0;
}

