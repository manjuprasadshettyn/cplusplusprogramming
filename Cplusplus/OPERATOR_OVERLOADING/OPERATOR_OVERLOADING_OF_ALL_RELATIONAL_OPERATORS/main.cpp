#include <iostream>

using namespace std;
class num
{
    int a;
public:
    void input();
    void display();
     bool operator ==(const num & );
     bool operator <(const num &);
     bool operator >(const num &);
     bool operator <=(const num &);
     bool operator >=(const num &);
     bool operator !=(const num &);
};
void num::input()
{
    cin>>a;
}
void num::display()
{
    cout<<" "<<a;
}
bool num::operator ==(const num & n2)
{
    if(a == n2.a)
    return(true);

    return(false);
}
bool num::operator <(const num & n2)
{
    if(a<n2.a)
    return(true);

    return(false);
}
bool num::operator >(const num & n2)
{
    if(a>n2.a)
    return(true);

    return(false);
}
bool num::operator <=(const num & n2)
{
    if(a<=n2.a)
    return(true);

    return(false);
}
bool num::operator >=(const num & n2)
{
    if(a>=n2.a)
    return(true);

    return(false);
}
bool num::operator !=(const num & n2)
{
    if(a!=n2.a)
    return(true);

    return(false);
}
int main()
{
    num n,m;
    cout<<"enter the first number"<<endl;
    n.input();
    cout<<"enter the second number"<<endl;
    m.input();
    cout<<"the two numbers are n =";
    n.display();
    cout<<" and m = ";
    m.display();
    int ch;
    char choice;
    do
    {
        cout<<"\n 1. ==";
        cout<<"\n 2. <";
        cout<<"\n 3. >";
        cout<<"\n 4. <=";
        cout<<"\n 5. >=";
        cout<<"\n 6. !="<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {

           case 1: if(n == m)
                    cout<<"n is equal to m"<<endl;
                    else
                    cout<<"n is not equal to m"<<endl;
                    break;

            case 2: if(n<m)
                    cout<<"n is lesser"<<endl;
                    else
                    cout<<"m is lesser"<<endl;
                    break;
            case 3: if(n>m)
                    cout<<"n is greater"<<endl;
                    else
                    cout<<"m is greater"<<endl;
                    break;
            case 4: if(n<=m)
                    cout<<"n is lesser or equal to m"<<endl;
                    else
                    cout<<"m is lesser or equal to n "<<endl;
                    break;
            case 5: if(n>=m)
                    cout<<"n is greater or equal to m"<<endl;
                    else
                    cout<<"m is greater or equal to n "<<endl;
                    break;
            case 6: if(n!=m)
                    cout<<"n is not equal to m"<<endl;
                    else
                    cout<<"n is equal to m"<<endl;
                    break;
          default: cout<<"invalid choice"<<endl;

        }
        cout<<"\nDo you want to continue? (Y/y)"<<endl;
        cin>>choice;
}while(choice=='Y' || choice=='y');
return 0;
}
