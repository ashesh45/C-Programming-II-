//To generate all amstrong numbers within a given range//
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
int n,n1,n2,temp,digit,sum,d;
printf("Enter the range");
scanf("%d%d",&n1,&n2);
for(n=n1;n<=n2;n++)
{
temp=n;
d=0;
while(temp>0)
{
d++;
temp=temp/10;
}
temp=n;
sum=0;
while(temp>0)
{
digit=temp%10;
sum=sum+pow(digit,d);
temp=temp/10;
}
if(n==sum)
printf("\n%d",n);
}
}
