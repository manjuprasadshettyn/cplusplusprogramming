#include <iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
    cout << "Enter a number:";
    int n,a,i=1,sum=0;
    cin>>n;
    a=n;
    int count=1;
    while(n>1)
    {
        count=count+1;
        n=n/2;
    }
    cout<<"We need "<<count<<" number of binary digits to represent the number "<<a<<endl;
do
    {
      int r=a%2;
      a=a/2;
      sum=sum+(i*r);
      i=i*10;
    }while(a!=0);
    cout<<"the binary equilaent is "<<sum;
    return 0;
}
