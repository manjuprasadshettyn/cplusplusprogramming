#include <iostream>

using namespace std;

class grade;
class student
   {
       public:char name[20];
       int usn;
       char branch[20];
       int m;
    void getdata()
      {
        cout<<"enter name,usn,branch,marks\n";
        cin>>name>>usn>>branch>>m;
      }
    void display()
      {
        cout<<"name:"<<name;
        cout<<"\nUSN:"<<usn;
        cout<<"\nbranch:"<<branch;
        cout<<"\nmarks:"<<m;
      }
    friend class grade;
   };

class grade
  {
      public:void cal_grade(student s)
         {

             if(s.m>=90 && s.m<=100)
                cout<<"grade:S";
              else if(s.m>=70)
                 cout<<"grade:A";
                else if(s.m>=60)
                   cout<<"grade:B";
                  else if(s.m>=45)
                      cout<<"grade:C";
                    else
                       cout<<"grade:F";
         }
  };

int main()
{
    student obj;
    grade g;
    obj.getdata();
    obj.display();
    g.cal_grade(obj);
    return 0;
}
