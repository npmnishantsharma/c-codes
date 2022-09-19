#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
int a,b,c;
cout<<"Enter any three number: ";
cin>>a>>b>>c;
if(a*a == b*b+c*c)
  cout<<"it is a pythagorean triplet";
else
  cout<<"it is not a pythagorean triplet";
getch();
}