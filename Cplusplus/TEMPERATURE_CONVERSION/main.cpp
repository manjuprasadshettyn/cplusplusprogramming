#include <iostream>

using namespace std;

int main()
{
    int choice;
    float temp,result;
    cout<<"enter the temperature\n";
    cin>> temp;
    label : cout <<"enter your choice\n 1.fahrenheit to celsius \n 2. celsius to fahrenheit\n";
    cin>>choice;
    switch(choice)
    {
        case 1: result=(temp-32)/1.8;
                cout <<"the temperature from fahrenheit to celsius is "<< result;
                break;
        case 2: result=1.8*temp+32;
                cout <<"the temperature from celsius to fahrenheit is "<< result;
                break;
        default: cout <<"wrong choice please reenter \n";
                  goto label;
    }
    return 0;
}
