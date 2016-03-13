/*create a class called date which has members day,month,year.by overloading increment operator
  write a c++ pseudocode such that when ever a object of class date is incremented it should show next date
  by considering leap year and number of days in that particular month.use constructors to initialize
  the object correctly.
All years which are perfectly divisible by 4 are leap years except for century years( years ending with 00 )
which is a leap year only it is perfectly divisible by 400.
*/
#include <iostream>
using namespace std;
class date{
int day;
int month;
int year;
public:
date()
{
    day=0;month=0;year=0;
}

date(int d,int m,int y)
{
    day=d;month=m;year=y;
}
void read()
{
    cout<<"Enter date (dd mm yyyy): ";
    cin>>day>>month>>year;


}
void show()
{
    cout<<day<<":"<<month<<":"<<year;
}

int isleapyear()
{
    if((year % 4==0 && year %100!=0) ||(year % 400==0))
    return 1;
    else return 0;
}
int thismonthmaxday()
{
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(month==2 && isleapyear())
    return 29;
    else
    return m[month-1];
}
void operator++()
{
    ++day;
    if(day>thismonthmaxday())
    {//set day to 1 and increment month
        day=1;
        month++;
    }
    if(month>12)
    {
        //set month to jan 1 and increment the year
        month=1;
        year++;

    }

}
};
void nextday(date & d)
{
    cout<<":DATE ";
    d.show();
    ++d; //calls overloaded function
    cout<<"on increment becomes ";
    d.show();
    cout<<endl;
}


int main()
{
   date d1(14,4,1971);
   date d2(29,2,1992);
   date d3(28,2,1993);
   date d4(31,2,1995);
   nextday(d1);
   nextday(d2);
   nextday(d3);
   nextday(d4);
   date today;
   today.read();
   nextday(today);
    return 0;
}
