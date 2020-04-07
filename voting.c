//WAP to accept the age and tell if eligible for voting. Tell the how many years are left for Voting. 


#include<stdio.h>
void main()
{
int age;
printf("Enter the age : ");
scanf("%d",&age);
if(age>=18)
printf("You are eligible...\n");
else 
printf("you re not eligible. More %d years to go..\n",18-age);
}
