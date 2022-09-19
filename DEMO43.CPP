#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
int a;
cout<<"Enter your marks ";
cin>>a;
if(a<=40){
    cout<<"Failed";
}else{
   if(a>40 && a<51){
   cout<<"THIRD DIVISION";
}else{
if(a>50 && a<60){
cout<<"SECOND DIVISION";
}else{
if(a>59){
cout<<"FIRST DIVISION";
}
}}}}