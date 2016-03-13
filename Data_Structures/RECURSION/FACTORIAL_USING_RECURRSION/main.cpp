#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
   return (n*fact(n-1));


}
int main()
{
   int x,factorial;
   cout << "enter the number" << endl;
   cin >> x;
   factorial=fact(x);
  cout <<"factorial of "<<x<< "is"<< factorial <<endl;
    return 0;
}
