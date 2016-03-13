#include <iostream>

using namespace std;

int main()
{
    int tdays,years,weeks,days,num1;
    cout << "Enter the total number of days: " ;
    cin >> tdays;
    years=tdays/365;
    num1=tdays%365;
    weeks=num1/7;
    days=num1%7;
    cout<<"\n" ;
    cout <<"years="<<years<<"\n"
         <<"weeks="<<weeks<<"\n"
         <<"days="<<days;
    return 0;
}
