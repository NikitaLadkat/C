#include<stdio.h>
void main()
{
   char a;
   printf("Enter a letter\n");
   scanf("%c",&a);
   if(a=='a'|| a=='e' || a=='i' || a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
   {
          printf("Character is Vowel");
   }
   else
   {
	 printf("Consonant");
   }

}
