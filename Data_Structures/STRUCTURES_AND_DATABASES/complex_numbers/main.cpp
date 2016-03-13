#include <iostream>
using namespace std;
struct number
{
 int realpart;
 int imgpart;
}*c1,*c2,*c3,a,b,c;



int main()
{
    c1=&a;
    c2=&b;
    c3=&c;
    cout << "enter the real and imag part of first complex number " << endl;
    cin >>c1->realpart >> c1->imgpart;
    cout << "enter the second real and img part" << endl;
    cin >> c2->realpart >> c2->imgpart;
    c3->realpart=c1->realpart+c2->realpart;
    c3->imgpart=c1->imgpart+c2->imgpart;
    cout <<"the sum of two complex is " << c3->realpart<<"+"<< c3->imgpart<<"i";
    return 0;
}




