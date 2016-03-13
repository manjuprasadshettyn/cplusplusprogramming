#include <iostream>
#include <string.h>
using namespace std;
class string1
{
    int len;
    char *name;
public:
    string1(){len=0; name= new char[len+1];}
    string1(char *s)
    {
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    string1 join(string1 a2)
    {
        string1 a3;
        a3.name= new char[len+a2.len+1];
        strcpy(a3.name,name);
        strcat(a3.name,a2.name);
        return (a3);
    }
    void display()
    {
        cout<<endl<<"Given String : "<<name;
    }

};
int main()
{
    string1 s1("ABCD"),s2("EFGH");
    string1 s3=s1.join(s2);
    s3.display();
    return 0;
}
