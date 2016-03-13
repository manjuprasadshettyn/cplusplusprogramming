#include <iostream>

using namespace std;
class MATRIX
{
 int r,c,a[10][10];
public:
friend istream & operator >>(istream & in , MATRIX  &m);
	friend ostream & operator <<(ostream & out , MATRIX  m);
	int operator == (MATRIX  m2);
	MATRIX  operator +(MATRIX  m2);
	MATRIX  operator -(MATRIX  m2);
};
istream & operator >>(istream & in , MATRIX  &m)
{
		in>>m.r>>m.c;
		cout<<"Enter the elements:";
		for(int i=0;i<m.r;i++)
			for(int j=0;j<m.c;j++)
				in>>m.a[i][j];
		return in;
}
ostream & operator <<(ostream & out , MATRIX  m)
{
		for(int i=0;i<m.r;i++)
		{
			for(int j=0;j<m.c;j++)
				out<<m.a[i][j]<<"\t";
			out<<endl;
		}
		return out;
}
int MATRIX  ::operator == (MATRIX  m2)
{
		if(r==m2.r && c==m2.c)
			return 1;
		else
			return 0;
}
MATRIX  MATRIX ::operator +(MATRIX  m2)
{		MATRIX  t;
		t.r=r;
		t.c=c;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				t.a[i][j]=a[i][j]+m2.a[i][j];
		return t;
}
MATRIX  MATRIX ::operator -(MATRIX  m2)
{		MATRIX  t;
		t.r=r;
		t.c=c;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				t.a[i][j]=a[i][j]-m2.a[i][j];
		return t;
}
int main()
{
	MATRIX  m1,m2,m3,m4;
	cout<<"Enter the order of matrix 1:";
	cin>>m1;
	cout<<"Enter the order of matrix 2:";
	cin>>m2;
	if(m1==m2)
	{
        cout<<"THE ORDER OF TWO MATRICES IS COMPATIBLE"<<endl;
        m3=m1+m2;
		cout<<"ADDITION OF 2 MATRICES:\n"<<m3;
		m4=m1-m2;
		cout<<"SUBTRACTION OF 2 MATRICES:\n"<<m4;
	}
	else
		cout<<"ORDER NOT COMPATIBLE !!!!!";
	return 0;
}
