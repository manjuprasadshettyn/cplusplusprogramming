#include <iostream>
#include<cstdlib>
using namespace std;
class bintree
{
    struct NODE{
    int num;
    struct NODE *left,*right;
    };
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
    NODE *prev,*temp,*nn;
    nn=new NODE;
    nn->left=nn->right=NULL;
    cout<<"\nEnter a number : ";
       cin>>nn->num;
    if(root==NULL)
    {
        root=nn;
        return;
    }
    temp=root;
    prev=NULL;
    while(temp!=NULL)
    {
        prev=temp;
        if(nn->num>temp->num)
             temp=temp->right;
        else
            temp=temp->left;
    }
    if(nn->num>prev->num)
        prev->right=nn;
    else
        prev->left=nn;
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
            case 3:exit(0);
            default:cout<<"Wrong Choice,"<<endl;
        }
    }
    return 0;
}
