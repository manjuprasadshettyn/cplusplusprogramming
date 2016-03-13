#include<iostream>
#include<cstdlib>
using namespace std;
class Palindrome {
    char s[100], stack[100];
    int top, bottom;
public:
    Palindrome();
    void getData() {
        cout << "Enter the string: ";
        cin >> s;
    }
    void checkPalindrome() {
        int temp = -1;
        char ch;
        ++bottom;
        push('#');
        for(int i = 0; s[i] != '\0'; i++) {
            ch = s[i];
            push(ch);
        }
        for(int i = top; stack[i] != '#'; i--) {
            char ch;
            ch = pop();
            if(ch != stack[++bottom]) {
                cout << "Not palindrome!";
                exit(0);
            }
            else
                temp++;
        }
        if(temp > 0)
            cout << "Palindrome!";
    }
    void push(char ch) {
        stack[++top] = ch;
    }
    char pop() {
        char ch;
        ch = stack[top--];
        return ch;
    }
};
 Palindrome::Palindrome()
 {
      top = -1;
        bottom = -1;
 }
    int main()
 {
    Palindrome p;
    p.getData();
    p.checkPalindrome();
    return 0;
}
