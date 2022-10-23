#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float sum,term;
int n,i;
printf("Enter the no. of data:");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{
term=1/2^i;
printf("%f",i,term);
sum+=term;
}
printf("sum is %f",sum);
getch();
}
