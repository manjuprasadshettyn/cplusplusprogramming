#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n1,n2,s1=0,s2=0,i;
    cout<<"enter the first number: ";
    cin>>n1;
    cout<<"\n"<<"enter the second number: ";
    cin>>n2;
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        s1=s1+i;
    }
     for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        s2=s2+i;
    }
    if(n1==s2&&n2==s1)
    {
        cout<<"given numbers are amicable numbers";

    }
    else
    {
        cout<<"given numbers are not amicable numbers";
    }
    return 0;
}
