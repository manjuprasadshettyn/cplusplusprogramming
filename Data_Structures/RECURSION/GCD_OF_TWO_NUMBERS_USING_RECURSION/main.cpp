#include <iostream>

using namespace std;

int hcf(int x,int y)
{
if (y!=0)
return hcf(y,x%y);
else
return x;
}
int main()
{
    int a,b,gcd;
    cout << "Enter 2 Nos. to calculate HCF: " << endl;
    cin>>a>>b;
    gcd=hcf(a,b);
    cout<<"GCD / HCF is : "<<gcd;
    return 0;
}
