#include <iostream>

using namespace std;
class Expression
{
    int top;
    char stack[20],inf[20],pf[20];
    public:
        Expression()
        {
            top=-1;
        }
        void readData();
        void push(char ch);
        void printData();
        void infToPf();
        char pop();
        int preceed(char ch);


};


void Expression::readData()
{

    cout<<"enter the infix expression"<<endl;
    cin>>inf;
}
void Expression::printData()
{
    cout<<"infix expression:"<<inf<<endl;
    cout<<"postfix ecpression:"<<pf<<endl;

}
void Expression::infToPf()
{
    int i,p;
    char ch;
    i=0;
    p=0;
    push('#');
    while(inf[i]!='\0')
    {
        ch=inf[i];
        switch(ch)
        {
            case'(':push(ch);
            break;
            case')':while(stack[top]!='(')
                          pf[p++]=pop();
                          pop();
                    break;

            case'$':
            case'^':
            case'*':
            case'+':
            case'-':
            case'/':while(preceed(stack[top])>=preceed(ch))
                    pf[p++]=pop();
                    push(ch);
                    break;
            default:pf[p++]=ch;
            break;
        }
        i++;
    }
    while(stack[top]!='#')
        pf[p++]=pop();
    pf[p]='\0';
}

void Expression::push(char ch)
{
    stack[++top]=ch;

}

char Expression::pop()
{
    char ch=stack[top--];
    return ch;

}
int Expression::preceed(char ch)
{

    int p;
    switch(ch)
    {
    case'$':
    case'^':p=3;
    break;
    case'*':
    case'/':p=2;
    break;
    case'+':
    case'-':p=1;
    break;
    case')':
    case'(':p=0;
    break;
    case'#':p=-1;
    break;
    }
    return p;

}





int main()
{
    Expression e;
    e.readData();
    e.infToPf();
    e.printData();
    cout << "process terminated" << endl;
    return 0;
}
