#include<stdio.h>
void main()
{

int i,n,grt;

printf("Enter How Many Elements U Want");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
grt=arr[0];
 printf("Array Elements Are\n");
for(i=0;i<n;i++)
{
   if(arr[i]>grt)
    grt=arr[i];
  printf("%d\n",arr[i]);
}

printf("Largest Number is=%d",grt);

}

