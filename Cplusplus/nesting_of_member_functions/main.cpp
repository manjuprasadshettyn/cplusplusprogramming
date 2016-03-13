#include <iostream>

using namespace std;
class largest
{
    int a,b;
public:
    void input();
    int large();
    void display(int);
};
void largest::input()
{
    cout<<"enter two number "<<endl;
    cin>>a>>b;
    int d=large();
    display(d);
}
int largest::large()
{
    if(a>b)
        return a;
    else
        return b;
}
void largest::display(int d)
{
    cout <<"the largest is "<<d;
}

int main()
{
   largest l;
   l.input();
    return 0;
}
