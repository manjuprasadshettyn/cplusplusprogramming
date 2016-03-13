#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"to find the sum of n ntural number"<<endl;
    cout<<"enter the n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum= "<<sum;
    return 0;
}
