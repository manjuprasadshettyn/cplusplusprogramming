#include <iostream>

using namespace std;

int gcd(int m,int n)
{
    int t;
    if(m<n)
        t=m;
    else
        t=n;

     stemp:if((m%t)==0)
    goto label1;
    else goto label2;
    label1:if((n%t)==0)
    return t;
    label2:t=t-1;
    goto stemp;
}
int main()
{
    int m,n,a;
    cout<<"to find the gcd using consecutive integers method"<<endl;
    cin>>m>>n;
    a=gcd(m,n);
    cout<<"gcd="<<a;
    return 0;
}
