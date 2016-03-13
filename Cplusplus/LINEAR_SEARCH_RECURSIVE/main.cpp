#include <iostream>

using namespace std;
int linear_search(int a[],int i,int n,int key)
{
    if(i>n)
    {
        return -1;
    }
    else if(a[i]==key)
    {
        return i;
    }
    else
    return linear_search(a,++i,n,key);
}

int main()
{
    int n,key,a[10],pos,i;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the key:"<<endl;
    cin>>key;
    i=0;
    pos=linear_search(a,i,n,key);
    if(pos==-1)
    {
        cout<<"Element not found."<<endl;
    }
    else
    {
         cout<<"Element found in position "<<pos+1<<endl;
    }
    return 0;
}
