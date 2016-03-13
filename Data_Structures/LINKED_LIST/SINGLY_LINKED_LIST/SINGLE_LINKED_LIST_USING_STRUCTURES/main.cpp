#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int info;
    struct node *link;
};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        cout<<"out of memory"<<endl;
        exit(0);
    }
    return x;
}
void freenode(NODE x)
{
    free(x);
}
NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;
}
NODE insert_rear(int item,NODE first)
{
    NODE temp;
    NODE cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
    return temp;
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    cout<<"the contents of singly linked list"<<endl;
    temp=first;
    while(temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->link;
    }
}
NODE delete_rear(NODE first)
{
    NODE temp;
    NODE prev;
    temp=first;
    prev=first;
    while(temp->link!=NULL)
    {
        prev=temp;
        temp=temp->link;
    }
    if(temp==NULL)
    {
        cout<<"node not found"<<endl;
    }
    else
    {
        cout<<"item deleted ="<<temp->info<<endl;
        prev->link=temp->link;
    }
    return prev;
}
NODE delete_front(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        cout<<"list empty cannot delete"<<endl;
        return first;
    }
    temp=first;
    temp=temp->link;
    cout<<"item deleted = "<<first->info<<endl;
    freenode(first);
    return temp;
}
int main()
{
    NODE first=NULL;
    int ch,item;
    for(;;)
    {
        cout<<"\n1.insert_front\n2.insert_rear\n3.delete_front\n4.delete_rear\n5.display\n6.exit\n"<<endl;
        cout<<"\nenter choice\n"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"\n enter the element to be inserted\n"<<endl;
                   cin>>item;
                   first=insert_front(item,first);
                   break;
            case 2:cout<<"\n enter the element to be inserted\n"<<endl;
                   cin>>item;
                   first=insert_rear(item,first);
                   break;
            case 3:first=delete_front(first);
                   break;
            case 4:first=delete_rear(first);
                   break;
            case 5:display(first);
                   break;
            default: exit(0);
        }
    }
    return(0);
}
