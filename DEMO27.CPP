#include <iostream.h>
#include <conio.h>

void main(){
clrscr();
int a;
cout<<"enter a number";
cin>>a;
if(a%7==0 || a%8==0)
  cout<<"number is divisible by 7 or 8";
else
  cout<<"number is not divisible by 7 or 8 ";
getch();
}