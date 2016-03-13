#include <iostream>

using namespace std;

int add(int n)
{
    if(n!=0)
     return (n+add(n-1));
}
int main()
{
    int n;
    cout << "enter the number of terms in the series" << endl;
    cin>>n;
    cout<<"the sum of first " <<n<<" numbers is "<<add(n);
    return 0;
}
