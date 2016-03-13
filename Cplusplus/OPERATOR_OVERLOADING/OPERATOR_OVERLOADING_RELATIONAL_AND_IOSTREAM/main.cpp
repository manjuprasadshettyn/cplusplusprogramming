#include <iostream>
#include<string.h>
using namespace std;
class STRING
{
    char s[30];
    public:
     STRING(){}
     bool operator ==(STRING);
     bool operator <(STRING);
     bool operator >(STRING);
     friend istream& operator >>(istream&,STRING&);
     friend ostream& operator <<(ostream&,STRING&);
     ~STRING(){}
};
bool STRING::operator ==(STRING o)
{
    if(strcmp(s,o.s)==0)
    return(true);

    return(false);
}
bool STRING::operator <(STRING o)
{
    if(strcmp(s,o.s)<0)
    return(true);

    return(false);
}
bool STRING::operator >(STRING o)
{
    if(strcmp(s,o.s)>0)
    return(true);

    return(false);
}
istream& operator >>(istream& in,STRING& o)
{
    in>>o.s;
    return(in);
}
ostream& operator <<(ostream& out,STRING& o)
{
    out<<o.s;
    return(out);
}
int main()
{
    STRING s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"\nEnter the second string: ";
    cin>>s2;
    if(s1==s2)
       cout<<s1<<" is alphabetically equal to "<<s2;
    else if(s1<s2)
        cout<<s1<<" is alphabetically less than "<<s2;
    else if(s1>s2)
        cout<<s1<<" is alphabetically greater than "<<s2;
        else
            cout<<"output can't be determined";
    return 0;
}
