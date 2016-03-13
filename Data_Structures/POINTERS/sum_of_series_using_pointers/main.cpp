#include <iostream>

using namespace std;

int main()
{
    int *ptr,sum=0;
    int n,i,a[100];
    ptr=&a[0];
    cout << "enter the number of elements" << endl;
    cin >> n;
    cout << "enter the array elements" << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    cout << "sum of the series is "<< sum;
    return 0;
}
