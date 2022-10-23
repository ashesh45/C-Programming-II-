//To determine whether a given integer no. is a perfect no. or not.A no. is said to be perfect no. if sum of its divisors(including 1)is no
//equal to the no. itself.eg 28=1+2+4+7+14
#include <stdio.h>
#include <conio.h>
void main()
{
unsigned int num,i,sum=0;
printf("Enter the no.");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}
if(sum==num)
printf("It is a perfect no.");
else
printf("It is not a perfect no.");
}
