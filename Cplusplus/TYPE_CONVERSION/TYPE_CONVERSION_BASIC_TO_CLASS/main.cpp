#include <iostream>

using namespace std;
class TIME
{
    int hrs,min;
    public:
    TIME()
    {
        hrs=0;
        min=0;
    }
    TIME(int x)
    {
        hrs=x/60;
        min=x%60;
    }
    void display()
    {
        cout<<"Hours="<<hrs<<endl;
        cout<<"Minutes="<<min<<endl;
    }
    ~TIME()
    {
    }
};
int main()
{
    TIME t1;
    int x;
    cout<<"Enter the value of x\n";
    cin>>x;
    t1=x;
    t1.display();
    TIME  t2(50);
    cout<<"using an object directly"<<endl;
    t2.display();
    return 0;
}
