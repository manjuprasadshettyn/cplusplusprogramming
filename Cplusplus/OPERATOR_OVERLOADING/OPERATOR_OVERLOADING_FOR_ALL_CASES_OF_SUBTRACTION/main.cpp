#include <iostream>

using namespace std;
class sub
{
    int x,y;
    public:
      void getdata();
      friend sub operator -(sub,sub);
      friend sub operator -(int,sub);
      void display();
};
void sub::getdata()
{
    cin>>x>>y;
}
void sub :: display()
{
    cout<<"the value of x="<<x<<" and y="<<y<<endl;
}
sub operator -(sub s1,sub s2)
{
    sub s3;
    s3.x=s1.x-s2.x;
    s3.y=s1.y-s2.y;
    return s3;
}
sub operator -(int a, sub s1)
{
    s1.x=a-s1.x;
    s1.y=a-s1.y;
    return s1;
}
int main()
{
    sub s1,s2,s3;
    int a;
    cout<<"enter the values for x  and y of first object"<<endl;
    s1.getdata();
    cout<<"enter the values for x  and y of second object"<<endl;
    s2.getdata();
    cout<<"the values first object is ";
    s1.display();
    cout<<"\nthe values second object is ";
    s2.display();
    s3=s1-s2;
    cout<<"result after subtraction of object with object is ";
    s3.display();
    cout<<"enter the value of a "<<endl;
    cin>>a;
    s1=a-s1;
    cout<<"result after subtraction of integer with object is ";
    s1.display();
    return 0;
}
