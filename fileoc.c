#include<stdio.h>
void main()
{

FILE *fp;
fp = fopen("fileoc.txt","w+");
fprintf(fp, "the file newly created..");
fputs("the file newly created..",fp);
fclose(fp);
}
