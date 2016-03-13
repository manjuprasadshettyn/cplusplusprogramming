#include <iostream>
using namespace std;

class node
{
public:
    node *link;
    int info;

};

class list
{
    node *first,*temp,*cur;
public:
    list()
    {
        first=NULL;
    }
    ~list()
    {
        cout<<"\n Deleted";
    }
    void insert_front();
    void delete_front();
    void insert_rear();
    void delete_rear();
    void display_front();
};
void list::insert_front()
{
    temp=new node;
    cout<<"\n Enter the info : ";
    cin>>temp->info;
    temp->link=first;
    first=temp;
}
void list::delete_front()
{
    temp=first;
    if(temp==NULL)
    {
        cout<<"\nLIST is EMPTY!!!!";

    }
    else
    {
        cout<<"\n dleted info : "<<temp->info;
        first=first->link;
        delete temp;
    }
}
void list::display_front()
{
    temp=first;
    if(temp==NULL)
    {
        cout<<"\n LIST is EMPTY!!!!";
    }
    else {
        while(temp!=NULL)
        {
            cout<<" \t "<<temp->info;
            temp=temp->link;
        }
    }
}
void list::insert_rear()
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
void list::delete_rear()
{
    cur=first;
    while(cur->link!=NULL)
    {
        temp=cur;
        cur=cur->link;
    }
    cout<<"\ndeleted info :"<<cur->info;
    temp->link=NULL;
    delete cur;
}


int main()
{
    int op;
    char ch;
    list l1;
    do
    {
        cout<<"1.insert front"<<endl;
        cout<<"2.insert rear"<<endl;
        cout<<"3.delete front"<<endl;
        cout<<"4.delete rear"<<endl;
        cout<<"5.display"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:l1.insert_front();break;
            case 2:l1.insert_rear();break;
            case 3:l1.delete_front();break;
            case 4:l1.delete_rear();break;
            case 5:l1.display_front();break;

            default:cout<<"wrong choice!"<<endl;

        }
        cout<<endl<<"press y to continue"<<endl;
        cin>>ch;
    }
        while(ch=='y'||ch=='Y');
    return 0;
}
