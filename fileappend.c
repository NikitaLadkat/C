#include<stdio.h>
void main()
{

FILE *fp;
fp = fopen("fileoc.txt","a+");
fprintf(fp, "Mulshi pattern..");
fputs("Mulshi pattern..",fp);
fclose(fp);
}
