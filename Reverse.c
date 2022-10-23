#include <stdio.h>
#include <conio.h>
void main()
{
unsigned int num,temp,rev,d;
rev=0;
printf("Enter the no.");
scanf("%d",&num);
temp=num;
 while(temp>0)
{
   d=temp%10;
rev=rev*10+d;
temp=temp/10;
}
printf("Reverse is %d",rev);

if(num==rev)
{
printf("\nThe number is a palindrome");
}
else
{
printf("\nThe number is not a palindrome");
}
}

