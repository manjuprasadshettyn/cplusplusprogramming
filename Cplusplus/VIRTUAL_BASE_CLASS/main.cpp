#include <iostream>

using namespace std;

class STUDENT
{
protected: char name[10];
	   char usn[10];
public :void read()
	{  	cout<<"USN:";
		cin>>usn;
		cout<<"Name:";
		cin>>name;

	}

};
class INTERNAL:virtual public STUDENT
{
protected :int im[3];
public :void read()
	{       cout<<"Internal marks of 3 subjects:";
		for(int i=0;i<3;i++)
		{	cout<<"\nSubject "<<i+1<<":";
			cin>>im[i];
		}
	}

};

class EXTERNAL: virtual public STUDENT
{
protected :int em[3];
public :void read()
	{       cout<<"External marks of 3 subjects out of 100:";
		for(int i=0;i<3;i++)
		{	cout<<"\nSubject "<<i+1<<":";
			cin>>em[i];
		}
	}

};
class RESULT: public INTERNAL,public EXTERNAL
{
float sub[3],total;
public:	void disp()
	{    	for(int i=0;i<3;i++)
		{
			sub[i]=im[i]+(em[i]/2);
			cout<<sub[i];
		}
		total=0;
		for(int i=0;i<3;i++)
			total+=sub[i];
		cout<<"\nUSN:"<<usn<<"\nName:"<<name;
		cout<<"\nFinal Marks in 3 subjects are:";
		for(int i=0;i<3;i++)
			cout<<"\nSubject "<<i+1<<":"<<sub[i]<<endl;
		cout<<"\nTotal marks:"<<total<<endl;

	}
};
int main()
{
RESULT r[10];
int n;
cout<<"Enter the number of students:";
cin>>n;
for(int i=1;i<=n;i++)
{
	cout<<"\nEnter the "<<i<<" student details:\n";
	r[i].STUDENT::read();
	r[i].INTERNAL::read();
	r[i].EXTERNAL::read();
}
cout<<"*************************\n";
for(int i=1;i<=n;i++)
{	cout<<"\nStudent record "<<i<<":\n";
	cout<<"----------------------\n";

	r[i].disp();
}
return 0;
}
