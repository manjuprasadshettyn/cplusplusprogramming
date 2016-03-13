#include <iostream>
using namespace std;
class date
{
    public:
    int m,day,yr;
    date() {}
    friend void print(date &d);
    date(int m,int d,int y)
    {
        setdate(m,d,y);
    }
    void setdate(int mo,int d,int y)
    {
        m=mo;
        day=d;
        yr=y;
    }
    int getmonth()const
    {
        return m;
    }
    int getday()const
    {
        return day;
    }
    int getyr()const
    {
        return yr;
    }

};
void print(const date &d)
{
    cout<<d.getday()<<"/"<<d.getmonth()<<"/"<<d.getyr()<<endl;
}
int main()
{
    const date obj(9,3,2012);
    print(obj);
    return 0;
}
