#include<stdio.h>
main()
{
int a,b ;
float add, sub, mul, div;
printf("Enter any two nos. :");
scanf("%d%d",&a, &b);
//Add
add= a+b ;
//sub
sub= a-b ;
//mul
mul= a*b ;
//div
div= a/b ;
printf("Add is: %f\n", add);
printf("Mul is: %f\n", mul);
printf("Sub is: %f\n", sub);
printf("Div is: %f\n", div);
}
