#include <iostream>

using namespace std;

int main()
{
    int x,y,q=0,r,a,b;
    cout <<"Enter the dividend: "<<"\n";
    cin>>a;
    cout<<"Enter the divisor: "<<"\n";
    cin>>b;
     if(b==0||a<b)
        cout<<"divison not possible"<<"\n";
     else
     {
        x=a;
        y=b;
        while(x>=y)
        {
            x=x-y;
            q=q+1;
        }
        r=x;
        cout<<"The quotient when"<<a<<"is divided by"<<b<<"is  "<<q<<"\n";
        cout<<"The remainder when"<<a<<"is divided by"<<b<<"is  "<<r;
     }
    return 0;
}
