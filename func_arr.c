#include<stdio.h>
void addarray(int arr[] , int size)
{
int i , sum=0 ;
for(i=0 ; i<size ; i++)
{
sum = sum + arr[i];
}
printf("Addition of array= %d", sum);
}

void largestofarray(int arr[], int size)
{
int i , max=arr[0] ;
for(i=0 ; i<size ; i++)
{
if(max<arr[i])
{
max=arr[i];
}
}
printf("Max value is : %d",max);
}
void main()
{
int arr[50];
int size, i, ch;


printf("Enter the size ..");
scanf("%d",&size);
printf("THe array is :");
for(i=0 ; i<size ;i++)
{
scanf("%d",&arr[i]);
}

do
{
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
addarray(arr,size);
break; 

case 2:
largestofarray(arr, size);
break ;

}
}
while(ch!=3);
}
