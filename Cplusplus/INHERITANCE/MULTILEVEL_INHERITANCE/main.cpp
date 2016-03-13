#include <iostream>
using namespace std;
class student
{
    protected:
        int roll_no;
        public:
        void geta(int);
        void puta();
};
void student::geta(int a)
{
    roll_no=a;
}
void student::puta()
{
    cout<<"Roll no.:"<<roll_no<<endl;
}
class test:public student
{
    protected:
    float sub1;
    float sub2;
    public:
    void getmark(float,float);
    void putmark(void);
};
void test::getmark(float a,float b)
{
    sub1=a;
    sub2=b;
}
void test::putmark()
{
    cout<<"Marks in sub1="<<sub1<<"\n";
    cout<<"Marks in sub 2="<<sub2<<endl;
}
class result:public test
{
    float total;
    public:
    void display();
};
void result::display()
{
    total=sub1+sub2;
    puta();
    putmark();
    cout<<"Total = "<<total<<endl;
}
int main()
{
    result student1;
    student1.geta(111);
    student1.getmark(75.0,59.5);
    student1.display();
    return 0;
}
