#include <iostream>
#define max 10
#include<stdlib.h>
using namespace std;
class STACK
{
    int s[max],top;
    public:
     STACK(){top=-1;}
     STACK operator +(int);
     STACK operator -();
     friend ostream& operator <<(ostream& ,STACK&);
     ~STACK(){}

};
STACK STACK::operator +(int ele)
{
    if(top==max-1)
      cout<<"Stack overflow";
    else
       s[++top]=ele;
    return(*this);
}
STACK STACK::operator -()
{
    int ele;
    if(top==-1)
      cout<<"Stack underflow";
    else
      {
          ele=s[top--];
          cout<<"Poped element is "<<ele;
      }
    return(*this);
}
ostream& operator <<(ostream& dout, STACK& o)
{
    int i;
    if(o.top==-1)
     dout<<"Stack empty";
    else
      {
          for(i=o.top;i>-1;i--)
             dout<<o.s[i]<<"\t";
      }
   return(dout);
}
int main()
{
    STACK ob1;
    int ch,ele;
    cout<<"Press 1:push\t2:pop\t3:display\t4:exit";
    for(;;)
    {
        cout<<"Enter the choice";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Enter the ele";
                   cin>>ele;
                   ob1=ob1+ele;
                   cout<<ob1;
                   break;
            case 2: ob1=-ob1;
                    break;
            case 3:cout<<"Contents of stack are";
                   cout<<ob1;
                   break;
            case 4: exit(0);


        }
    }
    return 0;
}
