#include <iostream>

using namespace std;

#define size 3
class queue
{
    int front,rear;
    int a[size];
    public: queue();
            void insert();
            void remove();
            void display();
};
queue::queue()
{
    front=0;
    rear=-1;
}
void queue::insert()
{
    int item;
    if(rear==size-1)
    {
        cout << "Queue is full\n";
    }
    else
    {
        cout << "Enter the value to be inserted\n";
        cin>>item;
        rear=rear+1;
        a[rear]=item;
    }
}
void queue::remove()
{
    int item;
    if(front>rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        item=a[front];
        cout << "Removed item"<<item<<"\n";
        front++;
    }
}
void queue::display()
{
    if(front>rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue contains \n";
        for(int i=front;i<=rear;i++)
        {
            cout <<a[i]<<"\t";
        }
    }
}
int main()
{
    int ch;
    char rpt;
    queue q;
    do
    {
        cout << "1.Insert\n"
                "2.Remove\n"
                "3.Display\n"
                "4.Exit\n";
                cout << "enter your choice";
                cin>>ch;
                switch(ch)
                {
                    case 1:q.insert();
                    break;
                    case 2:q.remove();
                    break;
                    case 3:q.display();
                    break;
                    case 4:return 0;
                    default :cout << "Wrong choice";
                }
                cout<< "\nPress Y to continue";
                cin>>rpt;
    } while(rpt=='y'||rpt=='Y');
}
