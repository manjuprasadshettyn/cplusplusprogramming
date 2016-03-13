#include <iostream>
#include<string.h>

using namespace std;

class string1
{
    char *name;
    int length;
public:
    string1()
    {
        length=0;
        name=new char[length+1];
    }
   string1(char *s)
    {
        length=strlen(s);
        name=new char[length+1];

        strcpy(name,s);
    }
    void display()
    {
        cout<<name<<"\n";
    }
    void join (string1 &a, string1 &b);
};
void string1::join (string1 &a, string1 &b)
{
    length=a.length+b.length;
    delete name;
    name=new char[length+1];

    strcpy(name,a.name);
    strcat(name,b.name);
}

int main()
{
    char *first="rama";
    string1 name1(first),name2("shama"),name3("bhama"),s1,s2;

    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}
