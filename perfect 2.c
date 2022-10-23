
//To determine whether a given integer no. is a perfect no. or not.A no. is said to be perfect no. if sum of its divisors(including 1)is no
//equal to the no. itself.eg 28=1+2+4+7+14
#include <stdio.h>
#include <conio.h>
void main()
{
unsigned int num,i,sum=0;
printf("Enter the no.");
scanf("%d",&num);
sum=0;
for(i=1;i<num;i++)
{
if(num%i==0)
sum+=i;
}
printf("sum is %d",sum);
if(num==sum)
printf("\n%d is a perfect no.");
else
printf("\n%d is not a perfect no.");
}


