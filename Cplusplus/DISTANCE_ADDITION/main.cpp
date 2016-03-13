#include <iostream>

using namespace std;

class DB;
class DM
{
    int meters,centimeters;
public:
    DM()
    {

    }

    DM(int i,int j)
    {
        meters=i;
        centimeters=j;
    }
    void display()
    {
        cout<<"METERS: "<<meters<<" CENTIMETERS: "<<centimeters<<endl;
    }
    friend DM add(DM,DB);
    friend DB add(DB,DM);
};

class DB
{
    int feet,inches;
public:
    DB()
    {

    }
    DB(int i,int j)
    {
        feet=i;
        inches=j;
    }
    void display()
    {
        cout<<"FEET: "<<feet<<" INCHES: "<<inches<<endl;
    }
    friend DM add(DM,DB);
    friend DB add(DB,DM);
};

DM add(DM x, DB y)
{
    DM d3;
    d3.centimeters=x.centimeters+(y.inches*2.54)+(x.meters*100)+(y.feet*30.48);
    if(d3.centimeters>=100)
    {
        d3.meters=(d3.centimeters/100);
        d3.centimeters=d3.centimeters%100;
    }
    return d3;
}

DB add(DB x, DM y)
{
    DB d3;
    int centimeters=y.centimeters+(x.inches*2.54)+(y.meters*100)+(x.feet*30.48);
    if(centimeters>=30.48)
    {
        d3.feet=(centimeters/30.48);
        d3.inches=(centimeters/2.54);
        d3.inches=d3.inches%12;
    }
    return d3;
}

int main()
{
    DM d3;
    DB d4;
    DM d1(1,1);
    DB d2(1,1);
    int i;
    cout<<"the first distance"<<endl;
    d1.display();
    cout<<"the second distance"<<endl;
    d2.display();

while(1)
{

 cout<<"enter your choice for addition.\n 1.result in meters and centimeters.\n 2. result in feet and inches\n 3. exit\n";
    cin>>i;
    switch(i)
    {
        case 1: d3=add(d1,d2);
                cout<<" after adding the two distances in meters and centimeters" <<endl;
                d3.display();
                break;
        case 2: d4=add(d2,d1);
                cout<<" after adding the two distances in meters and centimeters" <<endl;
                d4.display();
                break;
        case 3:return 0;
        default: cout<<"invalid choice";
    }
}
    return 0;
}
