#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x1;
    cout<<"Enter x1"<<endl;
    cin>>x1;
    cout <<setw(8)<<"Infosys"<<setw(20)<<"Values"<<endl;
    cout <<setw(8)<<"4nm11is026"<<setw(20)<<x1<<endl;
    cout<<setw(10)<<setfill('$')<<"50"<<"30"<<endl;
    return 0;
}
