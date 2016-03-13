#include <iostream>

using namespace std;

class conversion
{

    float inch;
public:
       conversion()
       {
           inch=55.4;
       }
       operator float()
       {
           return (inch/12);
       }
};
int main()
{
    float feet;
    conversion c;
    feet=c;
    cout <<feet<< endl;
    return 0;
}
