#include <iostream>
using namespace std;
class STUDENT
{
private:char USN[10],name[10];
float m1,m2,m3,total,avg;
public: void read();
void calculate();
void disp();
};
void STUDENT::read()
{ cout<<"\n----------------------\n";
cout<<"USN:";
cin>>USN;
cout<<"Ename:";
cin>>name;
cout<<"mark 1:";
cin>>m1;
cout<<"mark 2:";
cin>>m2;
cout<<"mark 3:";
cin>>m3;
}
void STUDENT::calculate()
{
	total=m1+m2+m3;
	if(m1<=m2 && m1<=m3)
		avg=(m2+m3)/2.0;
	if(m2<=m1 && m2<=m3)
		avg=(m1+m3)/2.0;
	if(m3<=m1 && m3<=m2)
		avg=(m1+m2)/2.0;
}
void STUDENT::disp()
{     cout<<"\n---------------\n";
      cout<<"USN:"<<USN<<endl;
      cout<<"name:"<<name<<endl;
      cout<<"total:"<<total<<endl;
      cout<<"average:"<<avg<<endl;
}
int main()
{
    STUDENT s[10];
	int n;
	cout<<"\nNO. of students? :";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		s[i].read();
		s[i].calculate();
	}
for(int i=0;i<n;i++)
{

s[i].disp();
}
    return 0;
}
