#include <iostream>
#include<cstring>

using namespace std;
class Book
{
    char title[30];
    char isbn[30];
    float price;
public:
    void read()
    {
        cout<<"Enter title of the book"<<endl;
        cin>>title;
        cout<<"Enter isbn of the book"<<endl;
        cin>>isbn;
        cout<<"Enter price of the book"<<endl;
        cin>>price;
    }
    void display()
    {
        cout<<"title: "<<title<<endl;
        cout<<"ISBN: "<<isbn<<endl;
        cout<<"Actual Price: "<<price<<endl;
        float offprice=price-(0.15*price);
        cout<<"Offer Price: "<<offprice<<endl;
    }
};
int main()
{
    Book *ptr[50];
    int n;
    cout<<"Enter the number of books"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of book"<<i+1<<endl;
        ptr[i]=new Book;
        ptr[i]->read();
    }
    cout<<"Details of the entered books are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Details of book"<<i+1<<endl;

        ptr[i]->display();
    }
    return 0;
}
