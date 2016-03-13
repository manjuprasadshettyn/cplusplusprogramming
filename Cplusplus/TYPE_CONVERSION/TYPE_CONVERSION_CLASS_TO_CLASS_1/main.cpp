#include <iostream>

using namespace std;

class emp1
{
    float emp_id,salary,da,hra;
public:
    emp1(float a,float b,float c,float d)
    {
        emp_id=a;
        salary=b;
        da=c;
        hra=d;
    }
    float get_emp_id()
    {
        return emp_id;
    }
     float get_salary()
    {
        return salary;
    }
     float get_da()
    {
        return da;
    }
     float get_hra()
    {
        return hra;
    }
};
class emp2
{
    float emp_id,gross_sal;
public:
    emp2()
    {

    }
    emp2(emp1 e1)
    {
        emp_id=e1.get_emp_id();
        gross_sal=e1.get_salary()+(e1.get_salary()*e1.get_da())+(e1.get_salary()*e1.get_hra());
    }
    void display()
    {
        cout<<" employee id: "<<emp_id<<endl;
        cout<<" gross salary: "<<gross_sal<<endl;
    }
};

int main()
{
    emp1 e1(10,70000,0.6,0.2);
    emp2 e2;
    e2=e1;
    e2.display();
    return 0;
}
