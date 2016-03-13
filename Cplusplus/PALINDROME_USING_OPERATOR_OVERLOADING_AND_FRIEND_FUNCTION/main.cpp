#include <iostream>
#include<string.h>

using namespace std;

class STRING
{
private:char str[20];
public:
	STRING(char s[])
	{
	  strcpy(str,s);
	}

	STRING(STRING  &s)
	{
	  strcpy(str,s.str);
	}
	friend void revs(STRING &s1);
	int operator ==(STRING s2);
	friend ostream &operator <<(ostream &out,STRING s);
};

int STRING::operator ==(STRING s2)
{
		if(strcmp(str,s2.str)==0)
			return 1;
		else
			return 0;
}
void revs(STRING &s1)
{
	strrev(s1.str);
}

ostream &operator <<(ostream &out,STRING s)
{
	out<<s.str<<endl;
	return(out);
}
int main()
{
     STRING s1("MADAM");
     STRING s2=s1;
     cout<<"Input String :"<<s1;
     revs(s2);
     cout<<"Reversed String :"<<s2;
     if(s1==s2)
	cout<<"STRING IS A PALINDROME !!!!!";
     else
	cout<<"STRING IS NOT PALINDROME !!!!!!";
     return 0;
}
