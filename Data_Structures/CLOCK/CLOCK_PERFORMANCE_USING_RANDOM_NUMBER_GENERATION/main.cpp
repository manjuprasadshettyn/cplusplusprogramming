#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int a[1001];

void selection_sort(int a[],int n)
{
  int i,j,small,pos;

    for(i=0;i<n-1;i++)
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        if(small>a[j])
        {
            small=a[j];
            pos=j;
        }
        a[pos]=a[i];
        a[i]=small;
    }

}
int main()
{
    int m,n=1000;
    double duration;
    clock_t start,stop;
    cout<<"elements are randomly generated for the program"<<endl;
     for(m=0;m<n;m++)
        a[m]=rand()%1000;
    start=clock();
    selection_sort(a,n);
    stop=clock();

    duration=double(stop-start)/CLOCKS_PER_SEC;
    cout<<"time taken to sort elements using selection sort is " << duration<<endl;
     for(m=0;m<n;m++)

    {
        cout<<a[m]<<" ";
    }

    return 0;
}

