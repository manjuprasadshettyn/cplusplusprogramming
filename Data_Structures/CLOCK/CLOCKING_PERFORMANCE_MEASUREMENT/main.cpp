#include <iostream>
#include <time.h>
using namespace std;
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
    int n,m;
    int a[1001];
    double duration;
    clock_t start,stop;
    cout << "enter number of elements" << endl;
    cin >>n;
    cout<<"enter the elements"<<endl;
     for(m=0;m<n;m++)
        cin>>a[m];
    start=clock();
    selection_sort(a,n);
    stop=clock();

    duration=double(stop-start)/CLOCKS_PER_SEC;
    cout<<"time taken to sort "<<n<<" elemnents using selection sort is " << duration;
    return 0;
}
