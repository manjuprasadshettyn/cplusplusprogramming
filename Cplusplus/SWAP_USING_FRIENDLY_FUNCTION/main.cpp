#include <iostream>

using namespace std;
class num2;
class num1
{
    int a;
    public:
    void getdata()
    {
        cout<<"enter first number"<<endl;
        cin>>a;
    }
    friend void swapp(num1, num2);
};
class num2
{
   int b;
   public:
    void getdata()
    {
        cout<<"enter second number"<<endl;
        cin>>b;
    }
    friend void swapp(num1, num2);
};
void swapp(num1 x, num2 y)
{
    int t;
        cout<<"numbers before swapping is "<<x.a<<"and"<<y.b<<endl;

       t=x.a;
       x.a=y.b;
       y.b=t;
       cout<<"numbers after swapping is "<<x.a<<"and"<<y.b<<endl;
}
int main()
{
   num1 x;
   num2 y;
   x.getdata();
   y.getdata();
   swapp(x,y);
    return 0;
}
