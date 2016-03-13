#include <iostream>
#include <string.h>
#include<cstdlib>

using namespace std;

class Palindrome
{
 char stack[100],s[100];
 int top = -1;
 public:
    void getData()
       {
        cout << "Enter the string: ";
        cin >> s;
       }
       void checkPalindrome()
       {
          int i,count=0;
          int len = strlen(s);

    for (i = 0; i <len; i++)
    {
        push(s[i]);
    }

    for (i = 0; i <len; i++)
    {
        if (s[i] == pop())
            count++;
    }

    if (count == len)
        cout<<"Palindrome string"<<endl;
    else
        cout<<"not a Palindrome string"<<endl;
}


    void push(char ch)
    {
        stack[++top] = ch;
    }
    char pop()
    {
        char ch;
        ch = stack[top--];
        return ch;
    }
};

int main()
{
    Palindrome p;
    p.getData();
    p.checkPalindrome();
    return 0;
}

