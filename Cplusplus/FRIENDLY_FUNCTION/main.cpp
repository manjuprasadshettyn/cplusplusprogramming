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
    friend void max(num1, num2);
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
    friend void max(num1, num2);
};
void max(num1 x, num2 y)
{
    if(x.a>y.b)
        cout<<x.a<<"is largest"<<endl;
    else
        cout<<y.b<<"is largest"<<endl;
}
int main()
{
   num1 x;
   num2 y;
   x.getdata();
   y.getdata();
   max(x,y);
    return 0;
}
