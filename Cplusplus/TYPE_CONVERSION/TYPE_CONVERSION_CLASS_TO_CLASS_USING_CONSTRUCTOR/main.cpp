#include <iostream>

using namespace std;
class invent1
{
    int code,no;
    float price;
    public:
    invent1()
    {
    }
    void read();
    void display();
    int getcode(){return code;}
    float getprice(){return price;}
    int getno(){return no;}
    ~invent1(){}
};
class invent2
{
    int code;
    float value;
    public:
    invent2()
    {
    }
    invent2(invent1 o)
    {
        code=o.getcode();
        value=o.getprice()*o.getno();
    }
    void read();
    void display();
    ~invent2(){}
};
void invent1::read()
{
    cout<<"Enter code";
    cin>>code;
    cout<<"Enter price";
    cin>>price;
    cout<<"Enter the no. of items";
    cin>>no;
}
void invent1::display()
{
    cout<<"code="<<code;
    cout<<"price="<<price;
    cout<<"number of items"<<no;
}
void invent2::read()
{
    cout<<"Enter code";
    cin>>code;
    cout<<"Enter value";
    cin>>value;
}
void invent2::display()
{
    cout<<"code="<<code;
    cout<<"value="<<value;
}

int main()
{
    invent1 i1;
    i1.read();
    i1.display();
    invent2 i2;
    i2=i1;
    i2.display();
    return 0;

}

