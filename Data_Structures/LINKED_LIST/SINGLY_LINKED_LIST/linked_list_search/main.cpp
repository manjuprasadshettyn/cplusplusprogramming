#include <iostream>

using namespace std;

class node
{
public:
    int info;
    node *link;
};

class list
{
    node *first,*temp,*cur,*prev;
public:
    list()
    {
        first=NULL;
    }
    void search(int item);
    void insert_sort(int item);
    void delete_speci(int item);
    void display();
};
void list::search(int item)
{
    temp=first;
    if(temp==NULL)
        cout<<"\n no Elements to search ";
    else
    {
        while(temp!=NULL)
        {
            if(temp->info==item)
                break;
            temp=temp->link;
        }
        if(temp==NULL)
            cout<<"\n No such element ";
        else
            cout<<"\n Successful search";
    }

}
void list::insert_sort(int item)
{
    temp=new node;
    temp->info=item;
    if(first==NULL)
    {
        temp->link=NULL;
        first=temp;
    }
    else if(first->info>=item)
    {
        temp->link=first;
        first=temp;
    }
    else
    {
        cur=first;
        prev=NULL;
        while(cur!=NULL&&item>cur->info)
        {
            prev=cur;
            cur=cur->link;
        }
        prev->link=temp;
        temp->link=cur;
    }

}
void list::delete_speci(int item)
{
    if(first==NULL)
        cout<<"\n list empty";
    else if(first->info==item)
    {
        cur=first;
        cout<<"\n deleted "<<first->info;
        first=first->link;
        delete cur;

    }
    else
    {
        cur=first;
        prev=first;
        while(cur!=NULL)
        {
            if(cur->info==item)
            {
                prev->link=cur->link;
                cout<<"\n deleted "<<cur->info;
                delete cur;
                break;
            }
            prev=cur;
            cur=cur->link;
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
            temp=temp->link;
        }
    }
}
int main()
{
    int op,item;
    char ch;
    list l1;
    do
    {
        cout<<"1.search"<<endl;
        cout<<"2.insert sort"<<endl;
        cout<<"3.delete specific"<<endl;
        cout<<"4.display"<<endl;
        cout<<"enter your choice :";
        cin>>op;
        if(op!=4)
           {
               cout<<"\n Insert item : ";
               cin>>item;
           }
        switch(op)
        {
            case 1:l1.search(item);break;
            case 2:l1.insert_sort(item);break;
            case 3:l1.delete_speci(item);break;
            case 4:l1.display();break;
            default:cout<<"wrong choice!"<<endl;

        }
        cout<<endl<<"press y to continue"<<endl;
        cin>>ch;
    }
        while(ch=='y'||ch=='Y');
    return 0;
}
