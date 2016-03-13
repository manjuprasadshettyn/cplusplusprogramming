#include <iostream>

using namespace std;

class emp2
{
    int emp_id;
    float gross_salary;
    public:
    emp2(){}
    void setemp_id(int c)
    {
        emp_id=c;
    }
    void setval(float v)
    {
        gross_salary=v;
    }
    void display();
    ~emp2(){}
};
class emp1
{
    int emp_id,salary;
    float da,hra;
    public:
    emp1(int,int,float,float);
    operator emp2();
    ~emp1(){}
};
emp1::emp1(int a,int b,float c, float d)
   {
     emp_id=a;
	 salary=b;
	 da=c*salary;
	 hra=d*salary;
   }
void emp2::display()
{
    cout<<"emp_id="<<emp_id<<endl;
    cout<<"gross_salary="<<gross_salary;
}
emp1::operator emp2()
    {
        emp2 o;
        o.setemp_id(emp_id);
        o.setval(salary+da+hra);
        return(o);
    }
int main()
{
    emp1 e1(101,25000,0.8,0.3);
    emp2 e2;
    e2=e1;
    e2.display();
    return 0;

}

