#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
FILE *fp;
int x,i;

fp=fopen("data1.txt","a+");
if(fp==NULL)
{
fp=fopen("data1.txt","w+");
if(fp==NULL)
{
printf("Error!Could not open file");
getch();
return;
}
}
printf("Data Read:\n");
while(fscanf(fp,"%d",&x)!=EOF);
{
printf("%d\t",x);
}
rewind(fp);
srand(time(NULL));
printf("\n\nData Being Written:\n");
for(i=0;i<5;i++)
{
x=rand()%100+1;
printf("%d\t",x);
fprintf(fp,"%d\n",x);
}
rewind(fp);
printf("\n\nData Read Again:\n");
while(fscanf(fp,"%d",&x)!=EOF)
{
printf("%d\t",x);
}
fclose(fp);
}
