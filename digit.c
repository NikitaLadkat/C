//WAP to enter any digit and it will return the number of digit till 4 Digit. 

#include<stdio.h>
void main()
{
   int a ;
   printf("\n Enter any digit : ");
   scanf("%d",&a);
   if(a>=0 && a<=9)
   {
          printf("It has 1 digit.");
   }
   else if (a>=10 && a<=99)
   {
	 printf("It has 2 Digits. ");
   }
   else if(a>=100 && a<=999)
   {
          printf("It has 3 digits.");
   }
   else if (a>=1000 && a<=9999)
   {
	 printf("It has 4 digits");
   }

}
