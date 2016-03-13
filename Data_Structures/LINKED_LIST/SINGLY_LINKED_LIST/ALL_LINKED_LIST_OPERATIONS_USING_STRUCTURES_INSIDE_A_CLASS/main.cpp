#include<iostream>
using namespace std;
class Linked_List
{
struct node
{
int info;
struct node *link;
};
struct node *first;
public:
Linked_List()
{
first = NULL;
}
void Create_List(int);
void AddAtBeg(int);
void AddAfter(int,int);
void Delete();
void Count();
void Search(int);
void Display();
void Reverse();
};
void Linked_List::Create_List(int data)
{
struct node *cur,*temp;
temp= (struct node *)new(struct node);
temp->info=data;
temp->link=NULL;
if (first==NULL)
first=temp;
else
{
cur=first;
while(cur->link!=NULL)
cur=cur->link;
cur-> link=temp;
}
}
void Linked_List::AddAtBeg(int data)
{
struct node *temp;
temp=(struct node*)new(struct node);
temp->info=data;
temp->link=first;
first=temp;
}
void Linked_List::AddAfter(int data,int pos)
{
 struct node *temp,*cur;
int i;
cur=first;
for(i=0;i<pos-1;i++)
{
cur=cur->link;
if(cur==NULL)
{
cout<<"\n\nThere are less than "<<pos<<" elements";
return;
}
}
temp=(struct node*)new(struct node);
temp->link=cur->link;
temp->info=data;
cur->link=temp;
}
void Linked_List::Delete()
{
struct node *temp,*cur;
int data;
if(first==NULL)
{
cout<<"\n\nList is empty";
return;
}
cout<<"\n\nEnter the element for deletion : ";
cin>>data;
if(first->info == data)
{
temp=first;
first=first->link;
delete(temp);
return;
}
cur=first;
while(cur->link->link != NULL)
{
if(cur->link->info==data)
{
temp=cur->link;
cur->link=temp->link;
delete(temp);
return;
}
cur=cur->link;
}
if(cur->link->info==data)
{
temp=cur->link;
delete(temp);
cur->link=NULL;
return;
}
cout<<"\n\nElement "<<data<<" not found";
}
void Linked_List::Display()
{
struct node *cur;
if(first == NULL)
{
cout<<"\n\nList is empty";
return;
}
cur=first;
cout<<"\n\nList is : ";
while(cur!=NULL)
{
cout<<cur->info;
cur=cur->link;
}
cout<<"\n";
}
void Linked_List::Count()
{
struct node *cur=first;
int cnt=0;
while(cur!=NULL)
{
cur=cur->link;
cnt++;
}
cout<<"Number of elements are \n"<<cnt;
}
void Linked_List::Reverse()
{
struct node *p1,*p2,*p3;
if(first->link==NULL)
return;
p1=first;
p2=p1->link;
p3=p2->link;
p1->link=NULL;
p2->link=p1;
while(p3!=NULL)
{
p1=p2;
p2=p3;
p3=p3->link;
p2->link=p1;
}
first=p2;
}
void Linked_List::Search(int data)
{
struct node *ptr = first;
int pos = 1;
while(ptr!=NULL)
{
if(ptr->info==data)
{
cout<<"\n\nItem "<<data<<" found at position "<<pos;
return;
}
ptr = ptr->link;
pos++;
}
if(ptr == NULL)
cout<<"\n\nItem "<<data<<" not found in list";
}
int main()
{
int choice,n,m,position,i;
Linked_List po;
while(1)
{
cout<<"1.Create List\n";
cout<<"2.Add at begining\n";
cout<<"3.Add after \n";
cout<<"4.Delete\n";
cout<<"5.Display\n";
cout<<"6.Count\n";
cout<<"7.Reverse\n";
cout<<"8.Search\n";
cout<<"9.exit\n";
cout<<"\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n\nHow many nodes you want:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter the element:";
cin>>m;
po.Create_List(m);
}
break;
case 2:
cout<<"\n\nEnter the element:";
cin>>m;
po.AddAtBeg(m);
break;
case 3:
cout<<"\n\nEnter the element:";
cin>>m;
cout<<"\nEnter the position after which this element is inserted:";
cin>>position;
po.AddAfter(m,position);
break;
case 4:
po.Delete();
break;
case 5:
po.Display();
break;
case 6:
po.Count();
break;
case 7:
po.Reverse();
break;
case 8:
cout<<"\n\nEnter the element to be searched:";
cin>>m;
po.Search(m);
break;
case 9:return 0;
default:
cout<<"\n\nWrong choice";
}
}
return 0;
}
