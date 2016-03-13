#include <iostream>

using namespace std;
int add(int n)
{
    if(n==0)
    return 0;
    else
    return(n+add(n-1));
}

int main()
{
    int n,sum;
    cout<<"to find the sum of n ntural number"<<endl;
    cout<<"enter the n"<<endl;
    cin>>n;
    sum=add(n);
    cout<<"sum="<<sum;
    return 0;
}
