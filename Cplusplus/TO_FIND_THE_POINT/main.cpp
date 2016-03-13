/*To  find the point*/
#include<iostream>
using namespace std;
int main()
{
int x , y;
 cout<<"\nEnter the x co-ordinate: ";
 cin>>x;
 cout<<" \nEnter the y co-ordinate: ";
 cin>>y;

 if(x==0 && y==0)
   cout<<"\nThe point is on the origin" ;
 else
 if(x==0 && y>0)
   cout<<"\nThe point is on the positive y-axis";
 else
 if(x>0 && y==0)
   cout<<"\nThe point is on the positive x-axis";
 else
 if(x==0 && y<0)
   cout<<"\nThe point is on the negative y-axis";
 else
 if(x<0 && y==0)
   cout<<"\nThe point is on the negative x-axis";
 else
 if(x>0 && y>0)
   cout<<"\nThe point is on the 1st Quadrant";
 else
 if(x>0 && y<0)
   cout<<"\nThe point is on the 4th Quadrant";
 else
 if(x<0 && y>0)
   cout<<"\nThe point is on the 2nd Quadrant";
 else
 if(x<0 && y<0)
   cout<<"\nThe point is on the 3rd Quadrant";

 return 0;
}
