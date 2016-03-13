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
    void insert_rear();
    void delete_rear();
    void display_rear();
};
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
    cout<<"\neleted info :"<<cur->info;
    temp->link=NULL;
    delete cur;
}
void list::display_rear()
{
    temp=first;
    if(temp==NULL)
    {
        cout<<"\nLIST is EMPTY!!!!";
    }
    else {
        while(temp!=NULL)
        {
            cout<<"\n info : "<<temp->info;
            temp=temp->link;
        }
    }
}

using namespace std;

int main()
{
    int op;
    char ch;
    list l1;
    do
    {
        cout<<"1.insert"<<endl;
        cout<<"2.remove"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:l1.insert_rear();break;
            case 2:l1.delete_rear();break;
            case 3:l1.display_rear();break;
            case 4:return 0;
            default:cout<<"wrong choice!"<<endl;

        }
        cout<<endl<<"press y to continue"<<endl;
        cin>>ch;
    }
        while(ch=='y'||ch=='Y');
    return 0;
}
