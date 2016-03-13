/*To find the sum of two time*/
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
  int hr1,min1,sec1,hr2,min2,sec2,secsum,hrsum,minsum;
  cout<<"\n\n\t Enter the first time in HH MM SS(with spaces): ";
  cin>>hr1>>min1>>sec1;
  cout<<"\n\n\tEnter the second time in HH MM SS(with spaces): ";
  cin>>hr2>>min2>>sec2;
  secsum=(sec1+sec2)%60;
  minsum=(min1+min2)%60+(sec1+sec2)/60;
  hrsum=(hr1+hr2)%24+(min1+min2)/60;
  cout<<"\n\n\t\t\t  First Time="<<setw(2)<<hr1<<":"<<setw(2)<<min1<<":"<<setw(2)<<sec1;
  cout<<"\n\n\t\t\t+";
  cout<<"\n\n\t\t\t Second Time="<<setw(2)<<hr2<<":"<<setw(2)<<min2<<":"<<setw(2)<<sec2;
  cout<<"\n\n\n\t\t\t-----------------------"  ;
  cout<<"\n\t\t\t Total time ="<<setw(2)<<hrsum<<":"<<setw(2)<<minsum<<":"<<setw(2)<<secsum;
  cout<<"\n\n\t\t\t-----------------------";
  return 0;
}
