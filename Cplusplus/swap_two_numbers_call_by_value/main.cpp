#include <iostream>

using namespace std;
void swapp(int x,int y)
{

    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping "<<x<<"\t"<<y;

}

int main()
{
   int a,b;
   cout <<"Enter two numbers: ";
   cin >>a >>b;
   cout << "the numbers before swapping is " << a <<"\t" <<b << endl;
   swapp(a,b);
    return 0;
}

