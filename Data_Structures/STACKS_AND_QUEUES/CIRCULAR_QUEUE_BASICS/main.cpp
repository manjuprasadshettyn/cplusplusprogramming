#include <iostream>

using namespace std;

#define size 5
class cqueue
{
    int front,rear,count;
    int a[size];
    public: cqueue();
            void insert(int);
            void remove();
            void display();
};
cqueue::cqueue()
{
    front=0;
   rear=-1;
    count=0;
}
void cqueue::insert(int x)
{
   if(count==size)
    {
        cout << "circular queue overflow\n";
        return;
    }
   rear=(rear+1)%size;
    a[rear]=x;
    count+=1;
}
void cqueue::remove()
{
    int rem=0;
    if(count==0)
    {
        cout << "circular queue underflow\n";
        return;
    }
    rem=a[front];
    cout<<"removed element is"<<rem<<endl;
    front=(front+1)%size;
    count-=1;
}
void cqueue::display()
{
    int i;
    int j=front;
    if(count==0)
    {
        cout<<"circular queue underflow\n";
        return;
    }
    else
    {
        cout<<"elements are : ";
        for(i=1;i<=count;i++)
        {
            cout<<a[j]<<" ";
            j=(j+1)%size;
        }
    }
}
int main()
{
    int ch,y;
    cqueue q;
    while(1)
    {
        cout << "1.Insert\n"
                "2.Remove\n"
                "3.Display\n"
                "4.Exit\n";
                cout << "enter your choice";
                cin>>ch;
                switch(ch)
                {
                    case 1:cout<<"enter element";
                           cin>>y;
                           q.insert(y);
                           break;
                    case 2:q.remove();
                             break;
                    case 3:q.display();
                            break;
                    case 4:return 0;
                    default :cout << "Wrong choice";
                             return 0;
                }
    }
    return 0;
}
