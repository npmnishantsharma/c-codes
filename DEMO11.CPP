#include <iostream.h>
#include <conio.h>

void main(){
clrscr();
float u,a,t,v;
cout<<"Enter initial volume ";
cin>>u;
cout<<"enter acceleration ";
cin>>a;
cout<<"enter time";
cin>>t;
v=u+a*t;
getch();
cout<<"velocity: "<<v;
getch();
}