#include<stdio.h>
void accept()
{

int arr1[50][50],arr2[50][50], i , j, col, row,add[50][50] ;
printf(" The array1 is :");
printf("How many col..\n");
scanf("%d",&row);
printf("How many row..\n");
scanf("%d",&col);
for(i=0 ; i<row ; i++)
{
for(j=0; j<col ;j++)
{
scanf("%d",&arr1[i][j]);
}
printf("\n");
}
//arr2
printf(" The array2 is :");
printf("How many col..\n");
scanf("%d",&row);
printf("How many row..\n");
scanf("%d",&col);
for(i=0 ; i<row ; i++)
{
for(j=0; j<col ;j++)
{
scanf("%d",&arr2[i][j]);
}
printf("\n");
}

//add
printf(" The add is :");
for(i=0 ; i<row ; i++)
{
for(j=0; j<col ;j++)
{
add[i][j] =arr1[i][j]+arr2[i][j] ;
}
printf("\n");
}


}

void main()
{
int c ;

accept();
}

