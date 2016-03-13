#include <iostream>
#include <stack> //stack template exists in the system library.
#include <queue> //queue template exists in the system library.
using namespace std;
int main()
{
char ch; //Variable used to hold an input character.
char ans;//Variable used in the dialog: Want to examine another string? (
bool good;
int i;
do //Beginning of the do-while loop.
 {
 stack<char> s; queue<char> q;
 //Declaring s and q here ensures that the stack s and queue q
 //are necessarily empty at the the beginning of each iteration.
 cout << "Please enter a string of characters: ";
 cin.get(ch);
 while(ch != '\n') //Read the input string one character at a time.
 {
 s.push(ch); q.push(ch);
 //A copy of ch goes at the top of the stack. At the same
 // time, a copy of ch is added at the end of the queue.
 cin.get(ch);
 }// end of while
 good = true; i = 1;
 while(!s.empty())
 { // Repeatedly compare the top element of the stack
 //and the front element of the queue
 if (s.top() == q.front())
 {
 s.pop(); q.pop(); i++;
 }
 else
 {
 good = false; break;
 }
 }// end of while
 if(good)
 cout << endl << "It is a palindrome.";
 else
 cout << endl << "It is not a palindrome, since"
 << endl
 << "the symbol at position " << i
 << " from the left is different from " << endl
 << "the symbol at position " << i
 << " from the right.";
 cout << endl << endl << "Want to examine another string? (y/n): ";
 cin >> ans;
 cin.ignore(100, '\n'); //Ignore the newline character.
 while(ans != 'n' && ans != 'N' && ans != 'y' && ans != 'Y')
 { //Force the user to input n or N or y or Y.
 cout << "Please enter n or N or y or Y: ";
 cin >> ans;
 cin.ignore(100, '\n');//Ignore the newline character.
 }//end of while
 } while (ans == 'y' || ans == 'Y');// end of do-while.
 cout << endl<<"thanks for using"<<endl << "CODED BY MANJUPRASAD SHETTY N"<< endl << endl;
return 0;
} // main
