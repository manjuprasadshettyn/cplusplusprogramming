#include <iostream>
using namespace std;
struct length
{
 int feet;
 int inch;
}*c1,*c2,*c3,a,b,c;



int main()
{
    c1=&a;
    c2=&b;
    c3=&c;
    cout << "enter the first length in feets and inches " << endl;
    cin >>c1->feet >> c1->inch;
    cout << "enter the second length in feets and inches" << endl;
    cin >> c2->feet >> c2->inch;
    c3->feet=c1->feet+c2->feet+(c1->inch+c2->inch)/12;
    c3->inch=(c1->inch+c2->inch)%12;
    cout <<"the sum of two lenghts is " << c3->feet<<"feet and"<< c3->inch<<"inches";
    return 0;
}




