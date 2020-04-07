//WAP to execute the Start no and End no of the Series

#include<stdio.h>
void main()
{
int i, start, end;
printf("Enter the Start no and End no of the Series : ");
scanf("\n%d\n%d",&start,&end);
printf("seris is :");
for (i=start ; i<=end ; i++)
{
	printf("%d\t", i);
}
}
