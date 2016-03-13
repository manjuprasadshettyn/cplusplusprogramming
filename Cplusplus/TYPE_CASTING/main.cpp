#include <iostream>

using namespace std;

int main()
{
    int a,b;
    float c,d;
    cout << "enter two numbers" << endl;
    cin>>a>>b;
    c=a/b;
    cout <<"quotient without typecast  "<<c<<endl;
    d=a/(float)b;
     cout <<"quotient with typecast  "<<d;
    return 0;
}
