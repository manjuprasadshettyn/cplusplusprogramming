#include <iostream>

using namespace std;

int main()
{
    char a[20],b[20],c[20];
    int point=0;
    int i,j,k;
    cout << "enter the first string" << endl;
    cin>>a;
    cout << "enter the second string" << endl;
    cin>>b;
    cout << "enter the third string" << endl;
    cin>>c;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
         for(k=0;c[k]!='\0';k++)
         {
            if(a[i]==b[j]&&a[i]==c[k])
                point++;
         }
        }
    }
    cout<<"the intersection of the elements of the strings is "<<point;
    return 0;
}
