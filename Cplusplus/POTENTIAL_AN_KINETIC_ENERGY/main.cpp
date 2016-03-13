/*To find kinetic and potential energy*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
const float g=9.8;
float vel,hei,ke,pe,mas,wt;
cout<<"\t\t PROGRAM TO FIND THE POTENTIAL AND KINETIC ENERGY OF A STONE";
cout<<"\n\nEnter the weight of the stone (grams) :";
cin>>wt;
cout<<"\nEnter the height at which the energy should be calculater (m) :";
cin>>hei;
cout<<"\nEnter velosity of the stone at at the height "<<hei<<"m (m/s) : ";
cin>>vel;
mas=wt/g;
ke=(0.5)*mas*vel*vel;
mas=mas/1000;
pe=mas*g*hei;
cout<<"\nKinetic energy of stone of mass "<<mas<<"kg at height "<<hei<<"m is = "<<ke<<"J";
cout<<"\n\nPotential energy of stone of mass "<<mas<<"kg at height "<<hei<<"m is = "<<pe<<"J";
return 0;
}
