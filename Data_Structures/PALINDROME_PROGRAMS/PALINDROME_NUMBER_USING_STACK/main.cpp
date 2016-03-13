//Palindrome Number Stack
#include <iostream>
#include<cstdlib>

using namespace std;
class palindrome{
    int n,stack[100];
    int top,bottom;
public:
    palindrome()
    {
        top=-1;
    }
    void get()
    {
        cout<<"Enter Number : ";
            cin>>n;
    }
    void check()
    {
        int t=n;
        int flag=0,r;
        push('#');
        while(t!=0)
        {
            r=t%10;
            push(r);
            t=t/10;
        }
        t=n;
        for(int i=top;stack[i]!='#';i--)
        {
            int digit;
            digit=pop();

                r=t%10;
                t=t/10;
                if(r!=digit)
                    {
                        cout<<"Not palindrome";
                        exit(0);
                    }
                else
                    flag++;

        }
        if(flag>0)
            cout<<"palindrome";
    }
    void push(int a)
    {
        stack[++top]=a;
    }
    int pop()
    {
        int d;
        d=stack[top--];
        return d;
    }
};
int main()
{
    palindrome p;
    p.get();
    p.check();
    return 0;
}

