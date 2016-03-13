#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,i,j;
    cout<<"enter the order of the matrix: ";
    cin >>m >>n;
    cout<<"\n"<<"enter the element of first matrix ";
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];
    cout<<"\n"<<"the first matrix elements are "<<"\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<"\t"<<a[i][j];
        cout<<"\n";
    }
     cout<<"\n"<<"enter the element of second matrix ";
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>b[i][j];
    cout<<"\n"<<"the second matrix elements are "<<"\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<"\t"<<b[i][j];
        cout<<"\n";
    }

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];
    cout<<"\n"<<" sum of two matrix is "<<"\n";
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<"\t"<<c[i][j];
        cout<<"\n";
    }
    return 0;
}




