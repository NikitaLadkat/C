#include<stdio.h>
void main()
{
int i, start, end, skip;
printf("Enter the Start no and End no of the Series : ");
scanf("\n%d\n%d",&start,&end);

printf("Enter the no to be skipped :");
scanf("%d", &skip);

printf("seris after skipping the entered number is :");
for (i=start ; i<=end; i++)
{
	if(i==skip)
{
continue;
}
	printf("%d\t", i);
}
}
