#include <iostream>

using namespace std;
class student
{
    char name[20];
    int sem;
    float cgpa;
public:
     int regno;
    void getdata()
    {

        cin >> regno;
        cin >> name;
        cin >> sem;
        cin >> cgpa;

    }
    void putdata()
    {
            cout <<"\n register number :"<<regno;
            cout <<"\n name :"<< name;
            cout <<"\n sem :" << sem;
            cout <<"\n cgpa :" << cgpa;

    }

};

int main()
{

    int n,i;
    student a[100];
    cout << "enter the number of students" << endl;
    cin >> n;
    cout << "order of entry is regno,name,sem,cgpa"<<endl;
    for(i=0;i<n;i++)
     {
       a[i].getdata();
     }
      int key;
        cout<<"enter the regno to be searched\n";
        cin>>key;
        for(i=0;i<n;i++)
        {
            if(key==a[i].regno)
         {
           a[i].putdata();
         }
        }

     return 0;
}
