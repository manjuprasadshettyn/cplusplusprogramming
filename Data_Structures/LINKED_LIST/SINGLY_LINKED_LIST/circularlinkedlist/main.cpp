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
    node *last,*temp;
public:
    list()
    {
        last=NULL;
    }
    void insertFront();
    void insertRear();
    //void deleteFront();
    void display();
   // void deleteRear();
    void deletespecified(int);
};
void list::insertFront()
{
    int item;
    temp= new node;
    cout<<"Enter the element\n";
    cin>>item;
    temp->info=item;
    if(last==NULL)
        last=temp;
    else
        temp->link=last->link;
    last->link=temp;

}
void list::insertRear()
{
    temp=new node;
    int item;
    cout<<"Enter the element\n";
    cin>>item;
    temp->info=item;
    if(last==NULL)
        last=temp;
    else
    {
        temp->link=last->link;
        last->link=temp;
        last=temp;
    }

}
/*void list::deleteFront()
{
    if(last==NULL)
        cout<<"\n EMPTY LIST !!";
    else if(last->link==last)
    {
        cout<<"\n Deleted :"<<last->info;
        delete(last);
        last=NULL;
    }
    else
    {
        temp=last->link;
        cout<<"\n Deleted :"<<temp->info;
        last->link=temp->link;
        delete(temp);
}
}

void list::deleteRear()
{
    if(last==NULL)
        cout<<"\n EMPTY LIST !!";
    else if(last->link==last)
    {
        cout<<"\n Deleted :"<<last->info;
        delete(last);
        last=NULL;
    }
    else
    {
        temp=last->link;
        while(temp->link!=last)
            temp=temp->link;
        temp->link=last->link;
        cout<<"\n Deleted :"<<last->info;
        delete(last);
        last=temp;
}
}*/

void list::deletespecified(int pos)
{
    int count=0;
    if(last==NULL)
        cout<<"\n EMPTY LIST !!";
    else if(last->link==last)
    {
        count=1;
        if(pos==count)
        {
          cout<<"\n Deleted :"<<last->info;
          last=NULL;
        }
    }
    else
    {
        count=1;
        temp=last->link;
        while(temp!=last&&count!=pos)
            {
                temp=temp->link;
                count++;
            }

        if(temp==last&&count!=pos)
        {
            cout<<"the specified position is not found"<<endl;
        }
        else if(count==pos)
        {
            cout<<"\n Deleted :"<<temp->info;
            temp=NULL;
        }

}
}

void list::display()
{
    temp=last;
    if(last==NULL)
        cout<<"list empty";
    else
       {
            temp=temp->link;
            while(temp!=last)
            {
                cout<<temp->info<<"\t";
                temp=temp->link;
            }
    cout<<last->info;
        }
}

int main()
 {
     list a;
     int c,pos;
  do
  {
         cout<<"\n\nSingly Circular linked list operations:";
         cout<<"\n1.Insert Front";
         cout<<"\n2.Insert Rear";
         //cout<<"\n3.Delete Front";
         //cout<<"\n4.Delete Rear";
         cout<<"\n5.Delete specified";
         cout<<"\n6.Display";
         cout<<"\n7.Exit";
         cout<<"\n\nEnter your choice\n";
         cin>>c;
         switch(c)
         {
             case 1:a.insertFront();
                   break;
             case 2: a.insertRear();
                   break;

            /* case 3:a.deleteFront();
                   break;
             case 4:a.deleteRear();
                   break;*/
             case 5:cout<<"enter the position to deleted"<<endl;
                    cin>>pos;
                    a.deletespecified(pos);
                    break;
             case 6:a.display();
                 break;
             case 7:break;
             default: cout<<"\nInvalid choice!!";
         }
     }while(c!=7);
     return 0;
 }



