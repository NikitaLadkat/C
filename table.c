//WAP to execute table of given no.

#include<stdio.h>
void main()
{
int i, num;
printf("Enter the num ");
scanf("\n%d",&num);
printf("Table is :");
for (i=num; i<=(10*num) ; i+=num)
{
	printf("%d\t", i);
}
}
