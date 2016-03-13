#include<iostream>
using namespace std;
int main()
{
int day,month,year;
cout<<"\n\n\t\t\t DATE CONVERSION \n\n";
cout<<"\n\nEnter the date (dd mm yyyy):  ";
cin>>day>>month>>year;
int leap=year%4;
if(day>0 && day<=31)
{
	if(month==1)
	{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tJANUARY "<<year;
}

else if(month==2)
{
	if(leap==0 && day<=29)
	{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tFebraury "<<year;
	}
	else if(day<=28)
	{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tFebraury "<<year;
	}
	else cout<<"\n\nERROR FEBRUARY CAN NOT HAVE MORE THAN 28 DAYS, ALSO "<<year<<" ALSO IT IS NOT A LEAP YEAR";
}

else if(month==3)
{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tMARCH "<<year;
}

else if(month==4)
{
	if(day<=30)
	{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tAPRIL "<<year;
	}
else cerr<<"\n\nERROR APRIL HAS ONLY 30 DAYS ";
}

else if(month==5)
{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tMAY "<<year;
}

else if(month==6)
{
if(day<=30)
{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tJUNE "<<year;
	}
	else cout<<"\n\nERROR JUNE HAS ONLY 30 DAYS ";
}

else if(month==7)
{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tJULY "<<year;
}

else if(month==8)
{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tAUGUST "<<year;
}

else if(month==9)
{
	if(day<=30)
	{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tSEPTEMBER "<<year;
	}
	else cout<<"\n\nERORE SEPTEMBER HAS ONLY 30 DAYS";
}

else if(month==10)
{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tOCTOBER "<<year;
}

else if(month==11)
{
	if(day<=30)
	{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tNOVEMBER "<<year;
	}
	else cout<<"\n\nERROR NOVEMBER CANNOT HAVE MORE THAN 30 DAYS";
}

else if(month==12)
{
	if(day==1 || day==21 || day==31 )
	cout<<day<<"st ";
	else if(day==2 || day==22 )
	cout<<day<<"nd ";
	else if(day==3 ||day==23 )
	cout<<day<<"rd ";
	else
	cout<<day<<"th ";
	cout<<"\tDECEMBER "<<year;
}

else cerr<<"\n\nERROR A YEAR HAS ONLY 12 MONTHS ";
}
else cout<<"\n\nINVALID DAY , A MONTH CANNOT POSSIBLY HAVE MORE THAN 31 DAY OR -VE DAYS";
return 0;
}
