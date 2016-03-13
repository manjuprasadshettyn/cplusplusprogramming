#include <iostream>

using namespace std;

int main()
{
    int *arr;
    int size;
    cout << "Enter the size of the integer array" << endl;
    cin>>size;
    cout<<"Creating an array of size"<<size<<".."<<endl;
    arr=new int[size];
    cout<<"Dynamic allocation of memory for array arr is successful."<<endl;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete arr;
    return 0;
}
