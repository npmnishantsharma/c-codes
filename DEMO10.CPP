#include <iostream.h>
#include <conio.h>

void main(){
clrscr();
float p,r,t,si;
cout<<"Enter principal";
cin>>p;
cout<<"enter rate";
cin>>r;
cout<<"enter time";
cin>>t;
si=p*t*t/100;
getch();
cout<<"simple intrest: "<<si;
getch();
}