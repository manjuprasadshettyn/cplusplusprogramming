#include <iostream>

using namespace std;

int main()
{
    int a[30];
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }
    int largest;
    largest=a[0];
    for(int i=1;i<n;i++)
    {
            if(a[i]>largest)
            largest=a[i];
    }
    cout<<"The elements present in the array are\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<"\t";
    cout<<"\nLargest of "<<n<<" numbers is "<<largest;
    return 0;
}
