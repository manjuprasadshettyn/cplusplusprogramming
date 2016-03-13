#include <iostream>
#include<string.h>
using namespace std;
class BOOK
{
    int isbn;
    char title[30],author[30];
    float price;
    public:
        BOOK(){}
        void read();
        void display();
        BOOK operator =(BOOK);
        ~BOOK(){}
};
void BOOK::read()
{
    cout<<"Enter ISBN";
    cin>>isbn;
    cout<<"Enter book title";
    cin>>title;
    cout<<"Enter author name";
    cin>>author;
    cout<<"Enter price";
    cin>>price;
}
void BOOK::display()
{
    cout<<"ISBN="<<isbn<<endl;
    cout<<"Book title="<<title<<endl;
    cout<<"Author="<<author<<endl;
    cout<<"Price="<<price<<endl;
}
BOOK BOOK::operator =(BOOK ob)
{
    cout<<"enter new isbn";
    cin>>isbn;
    strcpy(title,ob.title);
    strcpy(author,ob.author);
    price=ob.price;
    return(*this);
}
int main()
{
    BOOK b1,b2;
    b1.read();
    b2=b1;
    cout<<"BOOK1 is\n";
    b1.display();
    cout<<"BOOK2 is\n";
    b2.display();
    return 0;
}
