#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
   int a[30];
   cout<<"Enter the number of elements in the array\n";
   int n;
   cin>>n;
   cout<<"Enter the elements\n";
   for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    {
           if(a[i]==a[j])
           {
                cout<<"The elements in "<<i+1<<" Position and "<<j+1<<" Position are same\nSo its not unique\n";
                exit(0);
           }
    }
    cout<<"All elements in the array are unique";
     return 0;
}
