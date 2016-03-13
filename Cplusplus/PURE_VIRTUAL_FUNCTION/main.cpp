#include <iostream>
#include<cstdlib>
using namespace std;
class shape
{
protected:
    double x;
    double y;
public:
    void get_data(double a,double b)
    {
        x=a;
        y=b;
    }
    virtual void display_area()=0; //Pure virtual function

};
class rectangle:public shape
{
public:
    void display_area()
    {
        cout<<"Area of rectangle: "<<x*y<<endl;
    }
};
class triangle:public shape
{
    void display_area()
    {
        cout<<"Area of triangle: "<<0.5*(x*y)<<endl;
    }
};
int main()
{
shape *ptr;
triangle t;
rectangle rt;
double s1,s2;
int choice;
cout<<"Enter the values for x and y"<<endl;
cin>>s1>>s2;
cout<<"Enter the choice:"<<endl;
cout<<"Enter 1: To calculate area of rectangle\n2:Calculate area of triangle"<<endl;
cin>>choice;
switch(choice)
{
    case 1:ptr=&rt;
    ptr->get_data(s1,s2);
    ptr->display_area();
    break;
    case 2:ptr=&t;
    ptr->get_data(s1,s2);
    ptr->display_area();
    break;
    default:cout<<"sorry wrong choice"<<endl;

}
 return 0;
}

