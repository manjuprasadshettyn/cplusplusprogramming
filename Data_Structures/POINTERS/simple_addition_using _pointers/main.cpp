#include <iostream>

using namespace std;

int main()
{
    int a,b,c,*p,*q;
    cout << "enter two integers to add"<< endl;
    cin >>b>>c;
    p=&b;
    q=&c;
    a=*p+*q;
    cout << "sum of entered two numbers using pointers= "<< a;
    return 0;
}
