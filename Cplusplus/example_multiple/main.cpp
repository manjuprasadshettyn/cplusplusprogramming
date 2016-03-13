//implementation of previous program using constructor in multiple inheritance.
#include <iostream>
#include<string.h>
using namespace std;

class item
{
    private:
     char title[20];
    float price;

public:
item()
{
    strnset(title,0,20);
    price=0;
}

item(char *t,float p)
{
    strcpy(title,t);
    price=p;
}
void getdata()
{
    cout<<"\n enter title and price";
    cin>>title>>price;
}
void displaydata()
{
    cout<<endl<<"title and price";
    cout<<title<<"\t"<<price;
}
};

class sales
{
    private:
    float salesfig[3];

    public:
    sales()
    {
        for(int i=0;i<3;i++)
        salesfig[i]=0;
    }

    sales(float a,float b,float c)
    {
        salesfig[0]=a;
        salesfig[1]=b;
        salesfig[2]=c;
    }


    void getdata()
    {
        cout<<"\nEnter sales figures for 3 months";
        for(int i=0;i<3;i++)
        cin>>salesfig[i];
    }

void displaydata()
{
    cout<<endl<<"sales figure for 3 months";
    for(int i=0;i<3;i++)
    cout<<salesfig[i]<<"\t";

}


};

class hwitem:private item,private sales{

private:
char category[10];
char om[10];
public:

hwitem():item(),sales()
{
    strnset(category,0,10);
    strnset(om,0,10);
}

hwitem(float a,float b,float c,char *t,float p,char *cat,char *o):item(t,p),sales(a,b,c)
{
    strcpy(category,cat);
    strcpy(om,o);
}
void getdata()
{
    item::getdata();
    cout<<endl<<"enter the category and om";
    cin>>category>>om;
    sales::getdata();
}
void displaydata()
{
    item::displaydata();
    cout<<endl<<"category and om";
    cout<<category<<"\t"<<om;
    sales::displaydata();
}
};

int main()
{   hwitem h1;
hwitem h2(50000.00,20000.00,17000.00,"IBM PC/AT",25000,"FG","IBM");
//h1.displaydata();
h2.displaydata();
    return 0;
}
