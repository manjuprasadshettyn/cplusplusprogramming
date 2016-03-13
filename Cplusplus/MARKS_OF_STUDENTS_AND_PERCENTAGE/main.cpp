#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    float sub1,sub2,sub3,total,perc;
    int i,n;
    cout <<"enter marks in three subjects: ";
    cin>>sub1>>sub2>>sub3;
    total=sub1+sub2+sub3;
    perc=(total/300)*100;
    cout<<"the percentage marks are : "<<perc<<"%";
    for(i=0;i<n;i++)
    return 0;
}
