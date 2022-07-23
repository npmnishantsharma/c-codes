#include <iostream.h>
#include <conio.h>

void main(){
clrscr();
int a;
cout<<"enter a number";
cin>>a;
if(a%10==0 && a%5==0)
  cout<<"number is divisible by 10 and 5";
else
  cout<<"number is not divisible by 10 and 5 ";
getch();
}