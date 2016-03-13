#include <iostream>

using namespace std;
void fibo(int n)
{
    int fibo0=0,fibo1=1,fibonaci;
    if(n==1)
        cout <<fibo0;
    else
{
    cout<<fibo0<<"\t"<<fibo1;
    for(int i=2;i<n;i++)
    {
        fibonaci=fibo0+fibo1;
        fibo0=fibo1;
        fibo1=fibonaci;
        cout<<"\t"<<fibonaci;
    }
}
}

int main()
{
    int n;
    cout << "enter the number of elements in the series" << endl;
    cin>>n;
    cout<<"the fibonaci series is ";
    fibo(n);
    return 0;
}
