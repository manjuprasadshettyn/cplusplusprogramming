#include <iostream>

using namespace std;
struct student
{
    int regno;
    char name[20];
    int sem;
    float cgpa;
}s[20],*s1;

int main()
{
    s1=&s[0];
    int n,i,key;
    cout << "enter the number of students" << endl;
    cin >> n;
    cout << "order of entry is regno,name,sem,cgpa"<<endl;
    for(i=0;i<n;i++)
    {
        cin >> s1->regno;
        cin >> s1->name;
        cin >> s1->sem;
        cin >> s1->cgpa;
        s1++;

    }
    cout <<"enter the regno to be searched"<<endl;
    cin >>key;
    s1=&s[0];

    for(i=0;i<n;i++)
    {
        if(key==s1->regno)
        {
            cout <<"\n register number :"<< s1->regno;
            cout <<"\n name :"<< s1->name;
            cout <<"\n sem :" << s1->sem;
            cout <<"\n cgpa :" << s1->cgpa;
            break;
        }
        s1++;

    }
     if(i==n)
        {
            cout <<"\n register number not found"<<endl;
        }
    return 0;
}
