#include<stdio.h>
void main()
{
int i, skip;

printf("Enter the no to be skipped :");
scanf("%d", &skip);

printf("seris after skipping the entered number is :");


i=0;
while (i<=10)
{
	if(i==skip)
i++;
	printf("%d", i++);
}
}
