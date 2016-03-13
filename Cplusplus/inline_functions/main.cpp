#include <iostream>

using namespace std;
inline float mul(float,float);
inline float div(float,float);

int main()
{
    float a,b,c,d;
    cout << "enter two numbers" << endl;
    cin >>a>>b;
    c=mul(a,b);
    d=div(a,b);
    cout<<"product is " <<c<<endl;
    cout<<"quotient is "<<d<<endl;
    return 0;
}
inline float mul(float x,float y)
{
    return (x*y);
}
inline float div(float x,float y)
{
    return (x/y);
}
