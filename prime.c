#include <stdio.h>
#include <conio.h>
void main()
{
unsigned int num,count,i;
printf("Enter the no.");
scanf("%d",&num);
count=0;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
count++;
printf("\nDivisible by %d",i);
}

if(count==0)
printf("\nIt is a prime no.");
else
printf("\nIt is composite no.");
}

