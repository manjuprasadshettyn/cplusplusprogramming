#include <iostream>

using namespace std;

int gcd(int m,int n)
{
    int r;
    if(m<n)
    {
        int temp=m;
        m=n;
        n=temp;
    }
    while(n!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}
int main()
{
    int m,n,a;
    cout<<"find the gcd using EUCLIDIAN algorithm"<<endl;
    cin>>m>>n;
    a=gcd(m,n);
    cout<<"gcd="<<a;
    return 0;
}
