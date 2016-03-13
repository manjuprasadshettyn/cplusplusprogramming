#include <iostream>
#include<iomanip>
using namespace std;
class matrix
{
    int a[3][3];
    int i,j;
public:
    void read();
    void display();
    friend matrix transpose(matrix);
};
void matrix::read()
{
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            cin>>a[i][j];
}
void matrix::display()
{
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            cout<<a[i][j]<<"\t";
            cout<<endl;
        }
}
matrix transpose(matrix m)
{
    matrix m2;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            m2.a[i][j]=m.a[j][i];
    return m2;

}
int main()
{
    matrix m,m2;
    cout<<"Enter the elements of 3*3 matrix : "<<endl;
    m.read();
    cout<<"Given Matrix is  : "<<endl;
    m.display();
    m2=transpose(m);
    cout<<"Transposed Matrix is : "<<endl;
    m2.display();
    return 0;
}
