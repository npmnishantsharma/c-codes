#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
int a;
cout<<"Enter a number: ";
cin>>a;
if(a%7 == 0 && a%3 == 0)
  cout<<"nUmber is divisible";
else
  cout<<"number is not divisible";
getch();
}