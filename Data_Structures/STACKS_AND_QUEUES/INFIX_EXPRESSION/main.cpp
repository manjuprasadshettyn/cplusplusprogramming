#include <iostream>
#include <stdlib.h>
using namespace std;
class expression
{
    int top;
    char stack[20],infix[20],postfix[20];
    public:expression() {top=-1;}
    void readdata();
    void printdata();
    void infixtopostfix();
    void push(char ch);
    char pop();
    int preced(char ch);
};
void expression::readdata()
{
    cout<< "\nEnter the infix expression:";
    cin>>infix;
}
void expression::printdata()
{
    cout << "\ninfix expression is:"<<infix;
    cout << "\npostfix expression is:"<<postfix;
}
void expression::infixtopostfix()
{
    int i,p;
    char ch;
    i=0;p=0;
    push('#');
    while(infix[i]!='\0')
    {
        ch=infix[i];
        switch(ch)
        {
          case '(':push(ch);
                    break;

          case ')':while (stack[top]!='(')
                    postfix[p++]=pop();
                    pop();
                    break;
          case '$':
          case '^':
          case '*':
          case '/':
          case '+':
          case '-': while(preced(stack[top])>=preced(ch))
                    postfix[p++]=pop();
                    push(ch);
                    break;
          default: postfix[p++]=ch;
        }
        i++;
    }
    while (stack[top]!='#')

           postfix[p++]=pop();
    postfix[p]='\0';
}
 void expression::push(char ch)
 {
     stack[++top]=ch;
 }
 char expression::pop()
 {
     char ch=stack[top--];
     return ch;
 }

 int expression::preced(char ch)
 {
     int p;
     switch(ch)
     {
     case '$':
     case '^':p=3;
               break;
     case '/':
     case '*':p=2;
              break;
     case '+':
     case '-':p=1;
              break;
     case '(':
     case ')':p=0;
              break;
     case '#':p=-1;
              break;
     }
     return p;
 }
 int main()
 {
     expression e;
     e.readdata();
     e.infixtopostfix();
     e.printdata();
     cout<<"\n program terminated";
     return 0;
 }
