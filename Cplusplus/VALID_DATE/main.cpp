#include<iostream>
using namespace std;
int main()
	{
	unsigned int d,m,y,val=0;
	cout<<"\t\t\t\tTHE DATE CONVERTION";
	cout<<"\n   Enter the date :";
	cin>>d;
	cout<<"   Enter the month :";
	cin>>m;
	cout<<"   Enter the year :";
	cin>>y;
	cout<<"\n\n";


	//checking for validity of the date
	if(m<13)
	{
	switch(m)
	  {
	  case 1:
	  case 3:
	  case 5:
	  case 7:
	  case 8:
	  case 10:
	  case 12:if(d>31) {cout<<"ERROR.....The number of days is not greater than 31 for the given month ";val++;}break;
	  case 4:
	  case 6:
	  case 9:
	  case 11:if(d>30) {cout<<"ERROR.....The number of days is not greater than 30 for the given month ";val++;}break;
	  case 2:if(y%100==0)
			  {
			  if(y%400==0)
			  {
			 if(d>29) {cout<<"ERROR.......THE NUMBER OF DAYS IS NOT GREATR THAN 29 FOR THE GIVEN MONTH ";val++;}break;
			  }
			  else
			  {
			 if(d>28) {cout<<"ERROR.....THE NUMBER OF DAYS IS NOT GREATER THAN 28 FOR THE GIVEN MONTH";val++;}break;
			  }
			  }
			  else
			  {
			  if(y%4==0)
			  {
			  if(d>29) {cout<<"ERROR.....THE NUMBER OF DAYS IS NOT GREATR THAN 29 FOR THE GIVEN MONTH  ";val++;}break;
			  }
			  else
			  {
			  if(d>28) {cout<<"ERROR.....THE NUMBER OF DAYS IS NOT GREATER THAN 28 FOR THE GIVEN MONTH ";val++;}break;
			  }
			  }
			  }
			  }
			  else {cout<<"ERROR.....The number of months in a year is less than 12";val++; }


	 //DISPLAY
	 if(val==0)
	 {
	 switch(d)
	 {
	 case 1:
	 case 21:
	 case 31:cout<<"\n   "<<d<<"st "; break;
	 case 2:
	 case 22:cout<<"\n   "<<d<<"nd "; break;
	 case 3:
	 case 23:cout<<"\n   "<<d<<"rd "; break;
	 default:cout<<"\n   "<<d<<"th "; break;
	 }
	 switch(m)
	 {
			   case 1:cout<<"January "<<y;break;
			   case 2:cout<<"February "<<y;break;
			   case 3:cout<<"March "<<y;break;
			   case 4:cout<<"April "<<y;break;
			   case 5:cout<<"May "<<y;break;
			   case 6:cout<<"June "<<y;break;
			   case 7:cout<<"July "<<y;break;
			   case 8:cout<<"August "<<y;break;
			   case 9:cout<<"September "<<y;break;
			   case 10:cout<<"October "<<y;break;
			   case 11:cout<<"November "<<y;break;
			   case 12:cout<<"December "<<y;break;
			   }
			   }

			   return 0;
			   }

