#include<stdio.h>
void add(int , int);
void sub();
int multi();
float div(float, float);

void add(int a, int b)
{
printf("Addition = %d",(a+b));
}

void sub()
{
int x, y ;
printf("Enter any two numbers :");
scanf("%d %d",&x,&y);
printf("Substraction = %d",(x-y));
}

int multi()
{
int x, y ;
printf("Enter any two numbers :");
scanf("%d %d",&x,&y);
return(x*y);
}


float div(float x, float y)
{
return(x/y);
}

void main()
{
int n,m,p;
float a,b,result1,result2;
do
{
printf("\n 1. Add\n 2.Sub\n 3.Multi\n 4.div\n");
printf("Enter your choice :");
scanf("%d",&p);
switch(p)
{
case 1 :
printf("Enter any two numbers :");
scanf("%d%d",&n,&m);
add(n,m);
break;

case 2 :
sub();
break;

case 3 :
result1=multi();
printf("multiplication :%f",result1);
break;

case 4 :
printf("Enter any two numbers :");
scanf("%f%f",&a,&b);

result2=div(a,b);
printf("Div :%f",result2);
break;

default:
printf("Invalid .. ");
}}
while(p!=5);
}

