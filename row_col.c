#include<stdio.h>
void main()
{
int i , j , row, col;
int array[50][50];
printf("Enter row and column :");
scanf("%d%d",&row,&col);
for(i=0 ;i<row ;i++)
{
	for(j=0 ; j<col ;j++)
	{
		scanf("%d",&array[i][j]);
}

}
for(i=0 ;i<row ;i++)
{
	for(j=0 ; j<col ;j++)
	{
		printf("%d  ",array[i][j]);
}
printf("\n");
}
}
	

