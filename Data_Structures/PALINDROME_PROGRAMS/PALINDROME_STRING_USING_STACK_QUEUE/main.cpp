//Program to determine whether a given string of characters is a palindrome.
#include <iostream>
#include<cstdlib>
using namespace std;
class Palindrome
{
    char s[100], stack[100],queue[100];
    int top,rear,front;
   public:
        Palindrome();
        void getData()
        {
             cout << "Enter the string: ";
             cin >> s;
        }
         void checkPalindrome()
         {

           int temp=0;
           char ch,ch1;
           stack[++top]='#';
           for(int i = 0; s[i] != '\0'; i++)
           {
            ch = s[i];
            push(ch);
           }
        for(int i = top; stack[i] != '#'; i--)
            {

            ch=pop();
            ch1=pop1();
            if(ch!=ch1)
            {
                cout << "Not palindrome!";
                exit(0);
            }
            else
                temp++;
        }
        if(temp > 0)
            cout << "Palindrome!";
    }
         void push(char ch)
          {
               stack[++top] = ch;
               queue[++rear]=ch;
          }
        char pop()
        {
            char ch;
            ch = stack[top--];
            return ch;
        }
         char pop1()
        {
            char ch1;
            ch1 = queue[front++];
            return ch1;
        }

};
Palindrome::Palindrome()
 {
      top = -1;
       rear= -1;
       front=0;
 }
int main()
{
    Palindrome p;
    p.getData();
    p.checkPalindrome();
    return 0;
}


