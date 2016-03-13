#include <iostream>

using namespace std;

int main()
{
 int a[40];
 int i,n,max,min;
 cout<<"enter the number of elements: ";
 cin>>n;
 cout<<"\n"<<"enter the array elements"<<"\n";
 for(i=0;i<n;i++)
 cin>>a[i];
 max=a[0];
 min=a[0];
 for(i=1;i<n;i++)
 {
  if(max<a[i])
  max=a[i];
  if(min>a[i])
  min=a[i];
 }
 cout<<"\n"<<"the maximun element is: "<<max<<"\n"<<"the minimum element is: "<<min;
 return 0;
}
