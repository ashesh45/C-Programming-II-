#include <stdio.h>
#include <conio.h>
void main()
{
FILE *fp;
float x,sum,avg;
int count=0;

fp=fopen("data1.txt","r");
if(fp==NULL)
{
printf("Error!Could not open file");
getch();
return;
}
while(fscanf(fp,"%f",&x)!=EOF)
{
printf("%f\n",x);
sum+=x;
count++;
}
avg=sum/count;
printf("Average is %f",avg);
fclose(fp);
}
