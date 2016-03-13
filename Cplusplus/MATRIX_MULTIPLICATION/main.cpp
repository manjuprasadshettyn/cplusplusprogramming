#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{  int a[10][10],b[10][10],c[10][10];
    cout<<"Enter the order of two matrices\n";
    cout<<"Order of first matrix\n";
    int m,n;
    cout<<"m=";cin>>m;
    cout<<"n=";cin>>n;
    cout<<"Order of second matrix\n";
    int p,q;
    cout<<"p=";cin>>p;
    cout<<"q=";cin>>q;
    if(n!=p)
    {
       cout<<"Matrix are not compatible to multiply\n";
       exit(0);
    }
    cout<<"Enter the elements of first matrix\n";
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];
    }
     cout<<"Enter the elements of second matrix\n";
    for(int i=0;i<p;i++)
    for(int j=0;j<q;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]=";cin>>b[i][j];
    }

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        c[i][j]=0;
        for(int k=0;k<n;k++)
        c[i][j]=c[i][j]+a[i][k]*b[j][k];

    }
    cout<<"The elements of first matrix are\n";
     for(int i=0;i<m;i++)
     {
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<"\t";
    }
       cout<<"\n";
    }
      cout<<"The elements of Second matrix are\n";
     for(int i=0;i<p;i++)
     {
    for(int j=0;j<q;j++)
    {
        cout<<b[i][j]<<"\t";
    }
       cout<<"\n";
    }
    cout<<"The matrix obtained after multiplication\n";

     for(int i=0;i<m;i++)
     {
    for(int j=0;j<q;j++)
    {
        cout<<c[i][j]<<"\t";
    }
       cout<<"\n";
    }
    return 0;
}
