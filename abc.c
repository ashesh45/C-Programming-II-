//1+1/2+1/3+1/4+1/5+....//
#include <stdio.h>
#include <conio.h>
void main()
{
float sum,term;
int n,i;
printf("Enter the no. of data:");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{
term=1.0/i;
printf("\n1%d=%f",i,term);
sum+=term;
}
printf("sum is %f",sum);
getch();
}
