#include <iostream>

using namespace std;

int main()
{
    int n,key,a[10],flag=0,pos=0;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the key:"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            pos=i;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"Element found in position "<<pos+1<<endl;
    }
    else
    {
        cout<<"Element not found."<<endl;
    }
    return 0;
}
