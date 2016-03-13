#include <iostream>

using namespace std;
class student
{
    public:
    char name[25];
    int marks;
    void getdata()
    {
        cout<<"Enter your name and marks"<<endl;
        cin>>name>>marks;
    }
    void display()
    {
        cout<<"The lowest marks is "<<marks;
    }
    student lowest(student b)
    {
        if(b.marks<marks)
            return b;
        else
           return *this;

    }
};
int main()

{
    student obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3=obj1.lowest(obj2);
    obj3.display();
    return 0;
}
