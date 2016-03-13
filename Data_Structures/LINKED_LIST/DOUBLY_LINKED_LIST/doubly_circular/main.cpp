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
        first =new node;
        first->info=0;
        first->left=NULL;
        first->right=NULL;
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

    cur=first->right;
    temp->left=first;
    temp->right=cur;
    first->right=temp;
    cur->left=temp;

}

void list::insert_rear()
{
    temp=new node;
    cout<<"\n Enter the info : ";
    cin>>temp->info;

    cur=first->left;
    temp->right=first;
    temp->left=cur;
    first->left=temp;
    cur->right=temp;
}

void list::display()
{
    temp=first->right;
    if(temp==first)
    {
        cout<<"\n LIST is EMPTY!!!!";
    }
    else
    {
        while(temp!=first)
        {
            cout<<" \t "<<temp->info;
            temp=temp->right;
        }
    }

}

void list::delete_front()
{
    temp=first->right;
    if(temp==NULL)
    {
        cout<<"\nLIST is EMPTY!!!!";

    }
    else
    {
        first->right=temp->right;
        cout<<"\n dleted info : "<<temp->info;
        delete temp;
        temp=first->right;
        temp->left=first;

    }
}

void list::delete_rear()
{
    temp=first->left;
   if(temp==first)
    {
        cout<<"\nLIST is EMPTY!!!!";

    }
    else
    {
        first->left=temp->left;
        cout<<"\n dleted info : "<<temp->info;
        delete temp;
        temp=first->left;
        temp->right=first;


    }
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
            case 5:l1.display();break;

            default:cout<<"wrong choice!"<<endl;

        }
        cout<<endl<<"press y to continue"<<endl;
        cin>>ch;
    }
        while(ch=='y'||ch=='Y');
    return 0;
}
