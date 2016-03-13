#include <iostream>

using namespace std;

class tower
{
 int n;
 char source,destination,temp;
 public:
 void hanoi(int,char,char,char);
};
void tower::hanoi(int n,char source,char destination, char temp)
{
 if (n==1)
   {
       cout<<"\nMove disk "<<n<<" from tower "<<source<<" to tower"<<destination;
       return;
   }
hanoi(n-1,source,temp,destination);
  cout<<"\nMove disk "<<n<<" from tower "<<source<<" to tower"<<destination;
 hanoi(n-1,temp,destination,source);
  return;
}
int main()
{
 int n;
 tower Ob;

 cout<<"\n\t\t\t--- Tower of hanoi ---\n";
 cout<<"\n\nEnter the number of disks = ";
 cin>>n;
 Ob.hanoi(n,'A','B','C');
 return 0;
}
