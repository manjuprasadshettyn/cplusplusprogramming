#include <iostream>
using namespace std;

class node
{
public:
    node *link;
    int info;

};

class queue
{
    node *first,*temp,*cur;
public:
    queue()
    {
        first=NULL;
    }
    ~queue()
    {
        cout<<"\n DELETED";
    }
    void DELETE();
    void insert();
    void display();
};
void queue::DELETE()
{
    temp=first;
    if(temp==NULL)
    {
        cout<<"\nqueue is EMPTY!!!!";

    }
    else
    {
        cout<<"\n deleted info : "<<temp->info;
        first=first->link;
        delete temp;
    }
}
void queue::insert()
{
    temp=new node;
    cout<<"\nEnter the info : ";
    cin>>temp->info;
    temp->link=NULL;
    if(first==NULL)
        first=temp;
    else {
    cur=first;
    while(cur->link!=NULL)
        cur=cur->link;
    cur->link=temp;
    }
}
void queue::display()
{
    temp=first;
    if(temp==NULL)
    {
        cout<<"\n queue is EMPTY!!!!";
    }
    else {
        while(temp!=NULL)
        {
            cout<<" \t "<<temp->info;
            temp=temp->link;
        }
    }
}
int main()
{
    int op;
    char ch;
    queue q;
    do
    {
        cout<<"1.insert"<<endl;
        cout<<"2.DELETE"<<endl;
        cout<<"3.display"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:q.insert();break;
            case 2:q.DELETE();break;
            case 3:q.display();break;

            default:cout<<"wrong choice!"<<endl;

        }
        cout<<endl<<"press y to continue"<<endl;
        cin>>ch;
    }
        while(ch=='y'||ch=='Y');
    return 0;
}
