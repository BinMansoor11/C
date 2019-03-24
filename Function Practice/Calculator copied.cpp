#include<stdio.h>
#include<conio.h>
void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);
int main()
{
float f1,f2;

char choice,op;
printf("\ncalculator");
do
{
printf("\nentre two numbers");
scanf("%f %f",&f1,&f2);
printf("\nentre operator");
op=getch();
switch(op)
{
case'+':
add(f1,f2);
break;
case'-':
sub(f1,f2);
break;
case'*':
mul(f1,f2);
break;
case'/':
div(f1,f2);
break;
default:
printf("\ninvalid operator");
}
printf("\ndo you want to continue Y/N?");
choice=getch();
}
while(choice=='Y'|| choice=='y');

}
void add(float f1,float f2)
{
printf("addition of two numbers is %f",f1+f2);
}
void div(float f1,float f2)
{
if(f2!=0)
printf("div of two numbers is %f",f1/f2);
else 
printf("div by zero not allowed");
}
void sub(float f1,float f2)
{
printf("sub of two numbers is %f",f1-f2);
}
void mul(float f1,float f2)
{
printf("mul of two numbers is %f",f1*f2);
}



