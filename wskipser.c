#include<stdio.h>
void main()
{
int i, start, end, skip, startss , endss;
printf("Enter the Start no and End no of the Series : ");
scanf("\n%d\n%d",&start,&end);

//printf("Enter the seris within to be skipped :");
scanf("\n%d\n%d",&startss,&endss);

//printf("seris after skipping the entered number is :");


i=start;
while (i<=end)
{
	if(i>=startss && i<=endss)
{
i++;
}
	printf("%d\t", i++);

}
}
