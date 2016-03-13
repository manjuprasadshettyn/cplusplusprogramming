#include <iostream>

using namespace std;
class sample
{
    int x,y,z;
    public:
      sample(){}
      sample(int a,int b,int c)
      {
          x=a;
          y=b;
          z=c;
      }
      friend void operator -(sample &o);
      void display();
      ~sample(){}
};
void operator -(sample &o)
{
    o.x=-o.x;
    o.y=-o.y;
    o.z=-o.z;
}
void sample::display()
{
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;
    cout<<"\nz="<<z;
}
int main()
{
    sample s(10,-20,-30);
    -s;
    s.display();
    return 0;
}
