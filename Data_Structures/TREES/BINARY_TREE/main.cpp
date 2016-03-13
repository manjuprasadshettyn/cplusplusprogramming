#include <iostream>
#include<string.h>
using namespace std;
class NODE
{
public:
    int num;
    NODE *left,*right;
};
class bintree
{

public:
    NODE *root;
    bintree()
    {
        root=NULL;
    }
    void create();
    void inorder(NODE *);
    void preorder(NODE *);
    void postorder(NODE *);
    void display();
};
void bintree::create()
{
    NODE *prev,*cur,*nn;
    int i;
    char direction[10];
    nn=new NODE;
    nn->left=nn->right=NULL;
    cout<<"\nEnter a number : ";
       cin>>nn->num;
    if(root==NULL)
    {
        root=nn;
        return;
    }
    else
    {
        cout<<"\n enter direction";
        cin>>direction;
        cur=root;
        for(i=0;i<strlen(direction);i++)
        {
            prev=cur;
            if(direction[i]=='L')
                cur=cur->left;
            else
                cur=cur->right;
        }
        if((cur!=NULL)||i!=strlen(direction))
        {
            cout<<"\n insertion not possible";
            return;
        }
        if(direction[i-1]=='L')
            prev->left=nn;
        else
            prev->right=nn;
        }
        }
void bintree::display()
{
    if(root==NULL)
    {
        cout<<"Binary tree is empty";
        return;
    }
    cout<<"\n In order display is\n ";
    inorder(root);
    cout<<"\nPreorder display\n";
    preorder(root);
    cout<<"\nPostorder display\n";
    postorder(root);
}
void bintree::inorder(NODE *r)
{
    if(r!=NULL)
    {
        inorder(r->left);
            cout<<r->num<<" ";
        inorder(r->right);
    }
}
void bintree::preorder(NODE *r)
{
    if(r!=NULL)
    {
        cout<<r->num<<" ";
        preorder(r->left);
        preorder(r->right);
    }
}
void bintree::postorder(NODE *r)
{
    if(r!=NULL)
    {
        postorder(r->left);
        postorder(r->right);
        cout<<r->num<<" ";
    }
}
int main()
{
    int ch;
    bintree b1;
    while(1)
    {
        cout<<"\n1.create\n2.Display\n3.Exit\n\nEnter choice"<<endl;
            cin>>ch;
        switch(ch)
        {
            case 1:b1.create();break;
            case 2:b1.display();break;
            case 3:return 0;
            default:cout<<"Wrong Choice,"<<endl;
        }
    }
    return 0;
}
