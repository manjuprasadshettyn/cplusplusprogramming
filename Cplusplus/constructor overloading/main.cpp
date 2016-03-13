#include <iostream>

using namespace std;
class integer
{
    int a,b;
    public:

       integer()
       {
           a=3;
           b=5;
       }
       integer(int x,int y)
       {
           a=x;
           b=y;
       }
       integer(int x)
       {
           a=x;
       }
       integer(integer &ob)
       {
           a=ob.a;
           b=ob.b;
       }
       void display()
       {
           cout<<"\na="<<a;
           cout<<"\nb="<<b;
       }
};
int main()
{
    integer ob1;
    ob1.display();
    integer ob2(3,5);
    ob2.display();
    integer ob3(4);
    ob3.display();
    integer ob4(ob2);
    ob4.display();
    return 0;
}
