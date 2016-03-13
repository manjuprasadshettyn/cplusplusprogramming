#include<iostream>
using namespace std;

#define SIZE 3

class stack
{
int top;
int rem_item;
int a[SIZE];
int item;
public:
	   stack();
	   void push();
	   void pop();
	   int full();
	   int empty();
	   void display();
};

stack::stack()
{
	top=-1;
}

int stack::full()
{
	if(top==SIZE-1)
	  return 1;
	else
	  return 0;
}

int stack::empty()
{
	if(top==-1)
	 return 1;
	else
	 return 0;

}

void stack::push()
{
	if(full())
	{
	    cout<<"Stack is full!!..No more item can be inserted" <<endl;

	}
	else
	{
	    cout<<"Enter item to be inserted"<<endl;
	    cin>>item;
	    top++;
	    a[top]=item;
	    cout<<item<<" is inserted to the satck\n";
	}
}

void stack::pop()
{
	if(empty())
	{
	    cout<<"Stack is empty!!..No more item to remove"<<endl;

	}
	else
	{
	    rem_item=a[top];
	    top--;
	    cout<<"Removed item is "<<rem_item;
	}
}

void stack::display()
{
cout<<"Stack Status:"<<endl;
if(top==-1)
{
  cout<<"Stack is empty...No item to display"<<endl;
}
else
{
  for(int i=top;i>=0;i--)
  {
    cout<<a[i]<<endl;
  }
}
}

int main()
{
stack s;
int choice;

char repet;
do
{
cout<<"1.Push"<<endl;
cout<<"2.Pop"<<endl;
cout<<"3.Display stack status"<<endl;
cout<<"4.Exit"<<endl;
cout<<"Enter your choice:"<<endl;
cin>>choice;
  switch(choice)
  {
	case 1: s.push();
		break;
	case 2: s.pop();
		break;
	case 3: s.display();
		break;
	case 4: return 0;

	default:
		cout<<"Wrong choice!!"<<endl;

  }


cout<<endl<<"Do you want to continue?? Press y to continue..";
cin>>repet;
}
while(repet=='y' || repet=='Y');
return 0;
}
