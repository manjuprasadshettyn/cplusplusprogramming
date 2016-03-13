#include <iostream>

using namespace std;
class COMPLEX
{
    float r,i;
    public:
      COMPLEX(){}
      friend istream& operator >>(istream& in,COMPLEX& c);
      friend ostream& operator <<(ostream& out,COMPLEX& c);
      friend COMPLEX operator +(COMPLEX,COMPLEX);
      friend COMPLEX operator -(COMPLEX,COMPLEX);
      friend COMPLEX operator *(COMPLEX,COMPLEX);
      friend COMPLEX operator /(COMPLEX,COMPLEX);
      ~COMPLEX(){}
};
istream& operator >>(istream& in,COMPLEX& c)
{
    cout<<"\nEnter the real and imaginary part"<<endl;
    in>>c.r;
    in>>c.i;
    return(in);
}
ostream& operator <<(ostream& out,COMPLEX& c)
{
    out<<c.r<<"+i"<<c.i;
    return(out);
}
COMPLEX operator +(COMPLEX o1,COMPLEX o2)
{
    COMPLEX o3;
    o3.r=o1.r+o2.r;
    o3.i=o1.i+o2.i;
    return(o3);
}
COMPLEX operator -(COMPLEX o1,COMPLEX o2)
{
    COMPLEX o3;
    o3.r=o1.r-o2.r;
    o3.i=o1.i-o2.i;
    return(o3);
}
COMPLEX operator *(COMPLEX o1,COMPLEX o2)
{
    COMPLEX o3;
    o3.r=(o1.r*o2.r)-(o1.i*o2.i);
    o3.i=(o1.r*o2.i)+(o2.r*o1.i);
    return(o3);
}
COMPLEX operator /(COMPLEX o1,COMPLEX o2)
{
    float den=(o2.r*o2.r)+(o2.i+o2.i);
    COMPLEX o3;
    o3.r=((o1.r*o2.r)+(o1.i*o2.i))/den;
    o3.i=((o2.r*o1.i)-(o1.r*o2.i))/den;
    return(o3);
}

int main()
{
    COMPLEX c1,c2,c3;
    cout<<"\nEnter the first complex number";
    cin>>c1;
    cout<<"\nEnter the second complex number";
    cin>>c2;
    c3=c1+c2;
    cout<<"\nSum is\n";
    cout<<c3;
    c3=c1-c2;
    cout<<"\nDifference is\n";
    cout<<c3;
    c3=c1*c2;
    cout<<"\nProduct is\n";
    cout<<c3;
    c3=c1/c2;
    cout<<"\nQuotient is\n";
    cout<<c3;
    return 0;
}
