#include <iostream>

using namespace std;


struct book
{
    int bookno;
    char bookname[30];
    char author[50];
    float price;

}s[10];

int main()
{
 int n,i,key;
 cout<<"enter the number of books";
 cin>>n;
 for(i=0;i<n;i++)
 {

    cout<<"enter the book no";
    cin>>s[i].bookno;
    cout<<"enter the book name ";
    cin>>s[i].bookname;
    cout<<"enter author name";
    cin>>s[i].author;
    cout<<"enter the price";
    cin>>s[i].price;



 }

    cout<<"enter the number to be searched";
    cin>>key;
    for(i=0;i<n;i++)
    {

        if(s[i].bookno==key)
        {
        cout<<s[i].bookno<<endl;
        cout<<s[i].bookname<<endl;
        cout<<s[i].author<<endl;
        cout<<s[i].price<<endl;
        }
    }

    return 0;
}
