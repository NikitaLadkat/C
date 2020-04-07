#include<stdio.h>
void main()
{
int math, sci, eng ;
float result ;

printf("Enter the marks of the following subject : ");
printf("\nEnter marks of Maths : ");
scanf("%d",&math);
printf("Enter marks of Science : ");
scanf("%d",&sci);
printf("Enter marks of English : ");
scanf("%d",&eng);
result =(math+sci+eng)/3;
printf("Total Percentage : %f\n", result);
if(result>=75)
{
	printf("Grade A");
}
else if(result>=60 && result<=75)
{
	printf("Grade B");
}
else if(result>=50 && result<=60)
{
	printf("Grade C");
}
else if(result>=35 && result<=50)
{
	printf("Grade D");
}
else
{
	printf("Fail");
}

}
