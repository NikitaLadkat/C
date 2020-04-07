#include<stdio.h>
void main()
{

int i,n,sum=0;
printf("Enter How Many Elements U Want");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
sum+=arr[i];
}

printf("Addition Number is=%d",sum);

}

