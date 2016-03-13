
#include <iostream>
using namespace std;
class EMPLOYEE
{
    private:int no,basic;
	float DA,IT,net,gross;
	char name[10];
public: void read();
	void calculate();
	void disp();
	void modify();
};
void EMPLOYEE ::modify()
{	cout<<"new basic amount:";
	cin>>basic;
	calculate();
	cout<<"hi";
	disp();
}
void EMPLOYEE ::read()
{     cout<<"\n----------------------\n";
      cout<<"Eno:";
      cin>>no;
      cout<<"Ename:";
      cin>>name;
      cout<<"basic:";
      cin>>basic;
      DA=52.0;
      IT=30.0;
}
void EMPLOYEE ::calculate()
{	gross=basic +(basic*DA/100);
	net=gross-(gross*IT/100);
}
void EMPLOYEE ::disp()
{     cout<<"\n---------------\n";
      cout<<"Eno:"<<no<<endl;
      cout<<"Ename:"<<name<<endl;
      cout<<"basic:"<<basic<<endl;
      cout<<"da:"<<DA<<endl;
      cout<<"it:"<<IT<<endl;
      cout<<"gross:"<<gross<<endl;
      cout<<"net:"<<net<<endl;
}
int main()
{
    EMPLOYEE  e[2];
	int n;
	cout<<"\nNO. of employees??? :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		e[i].read();
		e[i].calculate();
		e[i].disp();
	}
	char ch;
	cout<<"Do you want to midify any record??? (y/n):";
	cin>>ch;
	int i=0;
	if(ch=='y'||ch=='Y')
	{	cout<<"modify record no:";
		cin>>i;
		cout<<"Updated record is:\n";
		e[i-1].modify();
	}
    return 0;
}

