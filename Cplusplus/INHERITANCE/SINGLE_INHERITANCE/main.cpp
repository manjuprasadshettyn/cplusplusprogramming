#include <iostream>
using namespace std;
class B
{
    int a;
    public:
    int b;
    void getab()
    {
        a=5;b=10;
    }
    int geta()
    {
        return a;
    }
    void showa()
    {
        cout<<"a="<<a<<endl;
    }

};
class D : public B
{
    int c;
    public:
    void mul()
    {
        c=b*geta();
    }
    void display()
    {
        cout<<"a="<<geta()<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    }
};
int main()
{
    D d;
    d.getab();
    d.mul();
    d.showa();
    d.display();
    d.b=20;
    d.mul();
    d.display();
    return 0;
}
