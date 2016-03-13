#include <iostream>

using namespace std;
class time
{
    int hours,mins;
public:
    void getdata(int a,int b)
    {
        hours =a;
        mins =b;
    }
    void sum (time t1,time t2)
    {
        hours=t1.hours+t2.hours+(t1.mins+t2.mins)/60;
        mins=(t1.mins+t2.mins)%60;
        cout<<"sum of two time is "<<hours<<"hours and "<<mins<<"minutes"<<endl;
    }
};

int main()
{
    time t1,t2,t3;
    t1.getdata(1,45);
    t2.getdata(5,35);
    t3.sum(t1,t2);
    return 0;
}
