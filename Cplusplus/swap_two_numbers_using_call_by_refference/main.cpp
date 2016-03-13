#include <iostream>

using namespace std;
int swapp(int &x,int &y)
{

    int temp;
    temp=x;
    x=y;
    y=temp;
    return 0;

}

int main()
{
   int a,b;
   cout <<"Enter two numbers: ";
   cin >>a >>b;
   cout << "the numbers before swapping is " << a <<"\t" <<b << endl;
   swapp(a,b);
   cout<<"After swapping "<<a<<"\t"<<b;
    return 0;
}

