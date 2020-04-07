//WAP to execute table of given no.

#include<stdio.h>
void main()
{
int i, num;
printf("Enter the num ");
scanf("\n%d",&num);
printf("Table is :");
i=num;
while(i<=(10*num))
{
printf("%d\t", i);
i+=num;
}
}




/*
for (i=num; i<=(10*num) ; i+=num)
{
	printf("%d\t", i);
}
*/

