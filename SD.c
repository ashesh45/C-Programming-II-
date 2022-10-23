#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float x[10],xSum,xBar,xDev,xDev2Sum,SD;
int n,i;
do{
printf("Enter no. of data:");
scanf("%d",&n);
}
while(n<=0||n>10);
xSum=0;
for(i=0;i<n;i++)
{printf("Enter data no. %d",i);
scanf("%f",&x[i]);
xSum+=x[i];
}
xBar=xSum/n;
xDev2Sum=0;
for(i=0;i<n;i++)
{
xDev=x[i]-xBar;
xDev2Sum+=xDev*xDev;
}
SD=sqrt(xDev2Sum/n);
printf("\n SD is :%.4f",SD);
getch();
}
