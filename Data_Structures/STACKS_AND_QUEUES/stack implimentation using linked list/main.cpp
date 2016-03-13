#include <iostream>
using namespace std;

class node
{
public:
    node *link;
    int info;

};

class stack
{
    node *first;
    node *temp;
public:
    stack()
    {
        first=NULL;
    }
    ~stack()
    {
        cout<<"\n Deleted";
    }
    void insert_front();
    void delete_front();
    void display();
};
void stack::insert_front()
{
    temp=new node;
    cout<<"\n Enter the info : ";
    cin>>temp->info;
    temp->link=first;
    first=temp;
}
void stack::delete_front()
{
    temp=first;
    if(temp==NULL)
    {
        cout<<"\nstack is EMPTY!!!!";

    }
    else
    {
        cout<<"\n deleted info : "<<temp->info;
        first=first->link;
        delete temp;
    }
}
void stack::display()
{
    temp=first;
    if(temp==NULL)
    {
        cout<<"\n stack is EMPTY!!!!";
    }
    else {
        while(temp!=NULL)
        {
            cout<<"\n info : "<<temp->info;
            temp=temp->link;
        }
    }
}

int main()
{
    int op;
    char ch;
    stack s;
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
            case 1:s.insert_front();
                   break;
            case 2:s.delete_front();
                   break;
            case 3:s.display();
                   break;
            case 4:return 0;
            default:cout<<"wrong choice!"<<endl;

        }
        cout<<endl<<"press y to continue"<<endl;
        cin>>ch;
    } while(ch=='y'||ch=='Y');
    return 0;
}
