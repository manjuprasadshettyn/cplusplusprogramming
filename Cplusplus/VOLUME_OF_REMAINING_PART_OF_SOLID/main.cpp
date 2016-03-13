/*To  find the volume of the remainig part of the solid.*/
#include<iostream>
using namespace std;
int main()
{
 float r1,h1,h2,vol1,vol2,vol3;
 const float pi=22/7.0;
 cout<<"\nA solid consists of a solid cone inside a hollow cylinder.This is a program to  find the volume of the remainig part of the solid. "       ;
 cout<<" \n\n |\\~~~~~~~~~/|";
 cout<<"  \n | \\  CONE / | ";
 cout<<"   \n |  \\     /  |";
 cout<<"   \n |   \\   /   |          ";
 cout<<"   \n |    \\ /    |   " ;
 cout<<"     \n |     V     |"  ;
 cout<<"\n |  CYLINDER |";
 cout<<"\n |___________|     " ;
 cout<<"\n\nEnter the radius of the cone and cylinder(common radius in cm): ";
 cin>>r1;
 cout<<"\n\nEnter the height of the cone(cm): ";
 cin>>h1;
 cout<<"\n\n\nvolume of the cone: "<<pi*(1/3.0)*r1*h1*r1<<" cm cube";
 cout<<"\n\n\nEnter the height of the cylinder(cm): ";
 cin>>h2;
 cout<<"\n\n\n\nVolume of the cylinder: "<<pi*r1*h2*r1<<" cm cube";
 cout<<"\n\n\n\nVolume of the remaining part of the solid(vol2-vol1): "<<(pi*r1*r1*h2)-(pi*(1/3.0)*r1*r1*h1)<<" cm cube";

 return 0;
  }
