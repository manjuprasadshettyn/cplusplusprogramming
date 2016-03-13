#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n==1)
     {
        return 0;
     }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));

    }
}
int main()
{
    int n,fib;
    cout<< "enter the number of terms in the series"<<endl;
    cin>>n;
    cout<<"the fibonacci series is ";
    for(int i=1;i<=n;i++)
    {
        fib=fibonacci(i);
        cout<<fib<<" ";
    }
    return 0;
}
