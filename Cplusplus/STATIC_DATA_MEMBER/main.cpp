#include <iostream>

using namespace std;
class item
{
    int number;
    static int count;
public:
    void getdata(int);
    void printcount()
{
    cout<<"count is: "<<count<<endl;
}
};
int item::count;
void item::getdata(int a)
{
    number = a;
    count++;
}

int main()
{
    item a,b,c;
    cout<<"before reading data"<<endl;
    a.printcount();
    b.printcount();
    c.printcount();
    a.getdata(10);
    b.getdata(20);
    c.getdata(30);
    cout<<"after reading data"<<endl;
    a.printcount();
    b.printcount();
    c.printcount();
    return 0;
}
