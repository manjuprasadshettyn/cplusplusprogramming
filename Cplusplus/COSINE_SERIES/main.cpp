#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, t=0, sum;
    int i, n=20;
    cout << " enter angle in degrees: \n";
    cin >> x;
    x= (x*3.1412)/180;
    t = t+1;
    sum=1;
    for (i=1;i<=n;i++)
    {
        t = t*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
        sum+=t;
    }
    cout <<"cos(x)="<<sum<<"\n";
    return 0;
}
