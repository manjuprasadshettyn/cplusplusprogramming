#include <iostream>
using namespace std;
class student
{
    protected:
     char usn[10];
     char name[10];
     int sem;
     public :
       void gest()
       {

           cout<<"Enter usn"<<endl;
           cin>>usn;
           cout<<"Enter name"<<endl;
           cin>>name;
           cout<<"Enter semister"<<endl;
           cin>>sem;
       }
       void dist()
       {
           cout<<"NAME:"<<name<<endl;
           cout<<"USN:"<<usn<<endl;
           cout<<"SEM:"<<sem<<endl;
       }
};
class internal:virtual public student
{
    protected :
    int m1,m2,m3;
    public:
    void geti()
    {
        cout<<"Enter internal mark\n";
        cout<<"Enter 1st sub mark"<<endl;
        cin>>m1;
          cout<<"Enter 2nd sub mark"<<endl;
        cin>>m2;
        cout<<"Enter 3rd sub mark"<<endl;
        cin>>m3;
    }
    void disi()
    {

        cout<<"INTERNAL MARKS"<<endl;
        cout<<"sub 1:"<<m1<<endl;
          cout<<"sub 2:"<<m2<<endl;
           cout<<"sub 3:"<<m3<<endl;
    }
};
class external:virtual public student
{
    protected:
      int e1,e2,e3;
    public:
     void gete()
     {
        cout<<"Enter the external mark\n";
        cout<<"Enter 1st sub mark"<<endl;
        cin>>e1;
          cout<<"Enter 2nd sub mark"<<endl;
        cin>>e2;
        cout<<"Enter 3rd sub mark"<<endl;
        cin>>e3;
     }
     void dise()
     {

        cout<<"EXTERNAL MARKS"<<endl;
        cout<<"sub 1:"<<e1<<endl;
          cout<<"sub 2:"<<e2<<endl;
           cout<<"sub 3:"<<e3<<endl;
     }
};
class result:public internal,public external
{
    protected:
     int total,t1,t2,t3;
     public:
     void get()
     {
         gest();
         geti();
         gete();
     }
    void cal()
      {
           t1=m1+e1;
           t2=m2+e2;
           t3=m3+e3;
           total=t1+t2+t3;
      }
      void disr()
      {
             dist();
             disi();
             dise();
             cout<<"TOTAL:"<<total;
      }
};
int main()
{
  int i,n;
  result s;
  cout<<"ENTER the number of students"<<endl;
  cin>>n;

  for(i=0;i<n;i++)
  {
      s.get();
      s.cal();
      s.disr();

  }
  return 0;
}
