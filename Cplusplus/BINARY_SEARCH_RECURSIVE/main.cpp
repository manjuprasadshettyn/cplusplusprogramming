#include <iostream>
#include <stdlib.h>

using namespace std;

int binary_search(int a[],int low,int high,int key)
{
    int mid;
    while(low<high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return binary_search(a,low,mid-1,key);
        else
            return binary_search(a,mid+1,high,key);
    }
    return -1;
}
int main()
{
    int a[10],i,n,key,pos;
    cout<<"Enter the numbers of elements"<<endl;
    cin >>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the number to be searched"<<endl;
    cin>>key;
    pos=binary_search(a,0,n,key);
    if(pos==-1)
    cout<<"Element not found"<<endl;
    else
        cout<<"Element found in position "<<pos+1<<endl;
    return 0;
}
