#include <iostream>

using namespace std;
template<class T>
void bubblesort(T a[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                T temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int ia[20],n;
    float fa[20];
    int choice;

    cout<<"Enter your choice: "<<endl;
    cout<<"Enter 1:integer sort\n2:floating point sort"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"\nEnter number of elements"<<endl;
        cin>>n;
        cout<<"\nEnter integer numbers"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>ia[i];
        }
        cout<<"\nArray before sort: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<ia[i]<<"\t";
        }
        bubblesort(ia,n);
        cout<<"\nArray after sort"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<ia[i]<<"\t";
        }
        break;
    case 2:
        cout<<"\nEnter number of elements"<<endl;
        cin>>n;
        cout<<"\nEnter floating point numbers"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>fa[i];
        }
        cout<<"\nArray before sort: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<fa[i]<<"\t";
        }
        bubblesort(fa,n);
        cout<<"\nArray after sort"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<fa[i]<<"\t";
        }
        break;
        default:cout<<"Sorry wrong choice"<<endl;
    }

    return 0;
}
