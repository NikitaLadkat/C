#include<stdio.h>
void main()
{
int a, b, c ;
printf("Enter two numbers:");
scanf("%d\n%d", &a,&b);
printf("\nNumber without swap:a=%d ,b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nNumber after swapping :a=%d ,b=%d\n",a,b);
}

