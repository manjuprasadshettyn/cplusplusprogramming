#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int stringmatch(char T[20],char P[20])
{
    int n=strlen(T);
    int m=strlen(P);
    for(int i=0;i<n-m;i++)
    {
        int j=0;
        while(j<m && P[j]==T[i+j])
        {
            j=j+1;
        }
        if(j==m)
        return i;
    }
    return -1;
}
int main()
{
    int v;
    char T[20],P[20];
    cout<<"Enter text "<<endl;
    cin>>T;
    cout<<"Enter the pattern "<<endl;
    cin>>P;
    v=stringmatch(T,P);
    if(v!=-1)
    cout<<"Pattern matched\n";
    else
    cout<<"Not matched\n";
    return 0;
}
