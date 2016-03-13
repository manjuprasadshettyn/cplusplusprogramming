#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void merge(int b[],int p,int c[],int q,int a[])
{
int i=0,j=0,k=0;
while (i<p&&j<q)
    {
    if (b[i]<=c[j])
        {
            a[k]=b[i];
            i=i+1;
        }
    else
        {
            a[k]=c[j];
            j=j+1;
        }
    k=k+1;
    }
   if(i==p)
    {
    while(j<q && k<p+q)
        {
            a[k]=c[j];
            j++;k++;
        }
    }
   else
    {
        while(i<p && k<p+q)
        {
            a[k]=b[i];
            k++;i++;
        }
    }
   }

void merge_sort(int a[],int n)
{
int b[n/2],c[n/2],i,j,p,q;
if(n>1)
  {
    for(i=0;i<n/2;i++)
    {
    b[i]=a[i];
    }
    p=i;
    for(i=n/2,j=0;i<n;i++,j++)
    {
    c[j]=a[i];
    }
    q=j;
    merge_sort(b,p);
    merge_sort(c,q);
    merge(b,p,c,q,a);
   }
}

int main()
{
int i,n;
cout<<"Enter the array size\n";
cin>>n;
int a[n];
cout<<"Enter the elements in array\n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"\nThe unsorted array is:\n";
for(i=0;i<n;i++)
    {
    cout<<a[i]<<"  ";
    }
merge_sort(a,n);
cout<<"\nThe sorted array is:\n";
for(i=0;i<n;i++)
    {
    cout<<a[i]<<"  ";
    }
return 0;
}
