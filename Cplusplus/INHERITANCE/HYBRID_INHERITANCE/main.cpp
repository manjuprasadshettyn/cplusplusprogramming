#include <iostream>
using namespace std;
class student
{
    protected:
    int rollno;
    public:
    void getnum(int a)
    {
        rollno=a;
    }
    void putnum(void)
    {
        cout<<"Roll no:"<<rollno<<endl;
    }
};
class test:public student
{
    protected:
    float part1,part2;
    public:
    void getmarks(float x, float y)
    {
        part1=x; part2=y;
    }
    void putmarks()
    {
        cout<<"Marks obtained:"<<endl<<"part1 ="<<part1<<endl;
        cout<<"part2 = "<<endl;
    }
};
class sports
{
    protected:
    float score;
    public:
    void getscore(float s)
    {
        score=s;
    }
    void putscor()
    {
        cout<<"sports wt:"<<score<<endl;
    }
};
class result:public test,public sports
{
    float total;
    public:
    void display()
    {
        total=part1+part2+score;
        putnum();
        putmarks();
        putscor();
        cout<<"Total score: "<<total<<endl;
    }

};
int main()
{
    result student_1;
    student_1.getnum(1234);
    student_1.getmarks(27.5,33.0);
    student_1.getscore(6.0);
    student_1.display();

    return 0;
}
