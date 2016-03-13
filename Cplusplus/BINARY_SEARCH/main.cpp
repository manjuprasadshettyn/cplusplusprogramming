#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int low,mid,high;
    int i,j,temp,key,n,pos=-1;
    int a[10];
    cout<<"enter the size of the array\n";
    cin>>n;
    cout<<"enter the array element\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"sorting the array using bubble sort\n";
        for(i=0;i<n;i++)
     {

           for(j=i+1;j<n;j++)
            if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
     }
      cout<<"the sorted array using bubble sort is \n";
     for(i=0;i<n;i++)
      cout<<a[i]<<"\t";
      cout<<"\nenter the element to be searched\n";
      cin>>key;
      low=0;
      high=n-1;
      while(low<=high)
      {
          mid=(low+high)/2;
          if(key<a[mid])
          {
              high=mid+1;
          }
          else
            if(key>a[mid])
          {
              low=mid+1;
          }
          else
            if(key==a[mid])
          {
              pos=mid+1;
              cout<<"the element to be searched "<<key<<" is located in "<<pos;
              return 0;
          }
      }
          if(pos==-1)
            cout<<"element not found"<<endl;

    return 0;
}
