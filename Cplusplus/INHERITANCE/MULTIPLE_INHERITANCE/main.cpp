#include <iostream>
using namespace std;
class M
{
    protected:
    int m;
    public:
    void getm(int a)
    {
        m=a;
    }
};
class N
{
    protected :
    int n;
    public:
    void getn(int b)
    {
        n=b;
    }
};
class P: public M,public N
{
    public:
    void display()
    {
        cout<<"m="<<m<<endl;
        cout<<"n="<<n<<endl;
        cout<<"m*n="<<m*n<<endl;
    }
};
int main()
{
    P p;
    p.getm(10);
    p.getn(20);
    p.display();
    return 0;
}
