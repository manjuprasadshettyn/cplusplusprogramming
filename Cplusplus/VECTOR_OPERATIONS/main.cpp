#include <iostream>

using namespace std;
class vector
{
      int v[20];
      int n;
    public:
       void read();
       void display();
       void multiply(int x);
       void modify(int x);

};
void vector::read()
{
    int i;
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
       cin>>v[i];
}
void vector::display()
{
    int i;
    cout<<"(";
    for(i=0;i<n-1;i++)
      cout<<v[i]<<",";
    cout<<v[i]<<")";

}
void vector::modify(int x)
{
   int i,n_val;
   for(i=0;i<n;i++)
   {
       if(v[i]==x)
       {
         cout<<"Enter the new value";
         cin>>n_val;
         v[i]=n_val;
         return;
       }

   }
   cout<<"Element not found";
}
void vector::multiply(int x)
{
    int i;
    cout<<"Enter the scalar";
    cin>>x;
    for(i=0;i<n;i++)
    {
        v[i]=v[i]*x;
    }
}

int main()
{
    int x,ch;
    vector v1;
    v1.read();
    cout<<"1:modify\t2:scalar multiplication\t3:display\t4:end";
    for(;;)
    {
     cout<<"Enter the choice";
     cin>>ch;
     switch(ch)
     {
        case 1:cout<<"Enter the element to modify";
               cin>>x;
               v1.modify(x);
               break;
        case 2:cout<<"Enter the scalar";
               cin>>x;
               v1.multiply(x);
               break;
        case 3:cout<<"Vector is";
               v1.display();
               break;


    }
    }

    return 0;
}
