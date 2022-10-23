#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
FILE *fp;
fp=fopen("C:\\test.txt","a");
if(fp==NULL)
{
printf("\n Cannot open file.");
}
else
{
printf("\n File is opened.");
}
fputs("ashesh maharjan is my name",fp);
fclose(fp);
getch();
}
