#include <iostream>
#include<string.h>
using namespace std;
class STRING
{	private:char str[20];
public:STRING(){}
	STRING(char s[])
	{	  strcpy(str,s);
	}
	STRING(STRING  &s)
	{	  strcpy(str,s.str);
	}
	STRING operator +(STRING s2);
	friend ostream &operator <<(ostream &out,STRING s);
};
STRING STRING::operator +(STRING s2)
{	  STRING temp;
	  strcpy(temp.str,str);
	  strcat(temp.str,s2.str);
	  return temp;
}
ostream &operator <<(ostream &out,STRING s)
{	out<<s.str<<endl;
	return(out);
}
int main()
{
     STRING s1("VTU");
     cout<<"String 1:"<<s1;
     STRING s2("BELGAUM");
     cout<<"String 2:"<<s2;
     STRING s3;
     s3=s1+s2;
     cout<<"String 3:"<<s3;
     return 0;
}
