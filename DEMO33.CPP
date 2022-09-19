#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
int a;
float b;
cout<<"Telephone Bill"<<endl;
cout<<"Enter your calls made: ";
cin>>a;
if(a<=3000){
cout<<"Your calls are free ";
}else if(a>=300 && a<=599){
b=a+100;
cout<<"Money To Be Paid: ";
cout<<b<<endl;
}else if(a>=600){
b=a+1.50;
cout<<"Money To Be Paid: ";
cout<<b<<endl;
}
getch();
}