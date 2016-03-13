#include <iostream>

using namespace std;

class student
{
  char usn[20];
  char name[30];
  int marks[3];
  float avg;
public:
  void input();
  void bestof();
  void output();
};
void student::input()
{
    cin>>usn>>name;
    for(int i=0;i<3;i++)
        cin>>marks[i];
    bestof();
}
void student::bestof()
{
    int best1,best2;
    if(marks[0]>marks[1])
    {
        best1=marks[0];
        best2=marks[1];
    }
    else
    {
        best1=marks[1];
        best2=marks[0];
    }
    for(int i=0;i<3;i++)
    {
        if(marks[i]>best1)
        {
            best2=best1;
            best1=marks[i];
        }
        else if(marks[i]>best2)
          best2=marks[i];
    }
    avg=float(best1+best2)/2;
}
void student::output()
{
    cout<<"USN: "<<usn<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Avrage of best 2 marks : "<<avg<<endl;
}
int main()
{
   student s[10];
   int n;
   cout<<"Enter number of students : "<<endl;
     cin>>n;
   cout<<"Input student details (USN,Name,Marks in 3 tests): "<<endl;
   int i;
     for(i=0;i<n;i++)
       {
           cout<<"Student number "<<i+1<<endl;
           s[i].input();
       }


    cout<<endl<<"------------------------------Student Database------------------------------"<<endl;
      for(i=0;i<n;i++)
       {
           s[i].output();
           cout<<endl;
       }

    return 0;
}
