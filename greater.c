#include<stdio.h>
void main()
{
int a, b, c ,d, e ;
printf("Enter the numbers :\n ");
scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
if(a>b && a>c && a>d && a>e)
{
	printf("Greater : A : %d",a);
}
else if(b>a && b>c && b>d && b>e)
{
	printf("Greater : B : %d",b);
}
else if(c>a && c>b && c>d && c>e)
{
	printf("Greater : C : %d",c);
}
else if(d>a && d>c && d>b && d>e)
{
	printf("Greater : D : %d",d);
}
else
{
	printf("Greater : E : %d",e);
}
 	
}
