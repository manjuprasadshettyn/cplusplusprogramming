#include <iostream>

using namespace std;
void display (char c[]);
void display (char c[],char d[]);

int main()
{
    char a[]="c programming";
    char b[]="c++ programming";
    display (a);
    display (a,b);
    return 0;
}
void display(char c[])
{
    cout<<c<<endl;
}
void display(char c[],char d[])
{
    cout<<c<<endl;
    cout<<d<<endl;
}
