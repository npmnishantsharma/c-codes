#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
int a;
float b;
cout<<"A Salesman Commision"<<endl;
cout<<"Enter your selling price";
cin>>a;
if(a<=5000){
b=a*2/100;
cout<<"Your Commission: ";
cout<<b<<endl;
}else if(a<=30000){
b=a*8/100;
cout<<"Your Commission: ";
cout<<b<<endl;
}else if(a>3000){
b=a*17/100;
cout<<"Your Commission: ";
cout<<b<<endl;
}
getch();
}