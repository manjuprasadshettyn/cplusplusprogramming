#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *left;
    node *right;

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
    void display();
};
void list::insert_front()
{
    temp=new node;
    cout<<"\n Enter the info : ";
    cin>>temp->info;
    temp->left=NULL;
    temp->right=NULL;
     if(first==NULL)
     {
        first=temp;
        temp=NULL;
     }
    else
    {
      first->left=temp;
      temp->right=first;
      first=temp;
      temp=NULL;
    }
}
void list::insert_rear()
{
    temp=new node;
    cout<<"\nEnter the info : ";
    cin>>temp->info;
    temp->left=NULL;
    temp->right=NULL;
    if(first==NULL)
    {
        first=temp;
        temp=NULL;
    }
    else
    {
        cur=first;
        while(cur->right!=NULL)
         {
            cur=cur->right;
         }

        cur->right=temp;
        temp->left=cur;
        cur=NULL;
    }

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

        if(first!=NULL)
        {
            first=first->right;
            temp->right=NULL;
            first->left=NULL;
        cout<<"\n deleted info : "<<temp->info<<endl;
        temp=NULL;
        }
        else
        {
            first=NULL;
            cout<<"\n deleted info : "<<temp->info<<endl;
        }

    }
}


void list::delete_rear()
{
    if(first==NULL)
    {
        cout<<"\nLIST is EMPTY!!!!";

    }
    else
    {
        temp=first;
        if(first->right==NULL)
        {
            first=NULL;
        cout<<"\n deleted info : "<<temp->info<<endl;
        temp=NULL;
        }
    else
    {
        cur=first;
        while(cur->right!=NULL)
                    cur=cur->right;

        cout<<"\n deleted info : "<<cur->info<<endl;
        temp=cur->left;
        temp->right=NULL;
        cur=NULL;

    }
}
}

void list::display()
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
            temp=temp->right;
        }
        cout<<endl;
    }
}


int main()
{
    int op;
    list l1;
    do
    {
        cout<<"1.insert front"<<endl;
        cout<<"2.insert rear"<<endl;
        cout<<"3.delete front"<<endl;
        cout<<"4.delete rear"<<endl;
        cout<<"5.display"<<endl;
        cout<<"6.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:l1.insert_front();break;
            case 2:l1.insert_rear();break;
            case 3:l1.delete_front();break;
            case 4:l1.delete_rear();break;
            case 5:l1.display();break;
            case 6:return 0;
            default:cout<<"wrong choice!"<<endl;

        }
    } while(op!=6);

    return 0;
}
