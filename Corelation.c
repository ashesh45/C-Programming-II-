#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float x[100],y[100];
float xSum,ySum,xBar,yBar,xDev,yDev,Sum1,Sum2,Sum3,R;
int i,n;
printf("Enter the no. of data pairs:");
scanf("%d",&n);
xSum=0;
ySum=0;
for(i=0;i<n;i++)
{
printf("Enter data pairs no.%d:",i);
scanf("%f%f",&x[i],&y[i]);
xSum+=x[i];
ySum+=y[i];
}
xBar=xSum/n;
yBar=ySum/n;

Sum1=0;
Sum2=0;
Sum3=0;
for(i=0;i<n;i++)
{
xDev=x[i]-xBar;
yDev=y[i]-yBar;
Sum1+=xDev*yDev;
Sum2+=xDev*xDev;
Sum3+=yDev*yDev;
}
R=Sum1/(sqrt(Sum2*Sum3));
printf("\nCorelation coefficient=%.4f",R);
getch();
}
