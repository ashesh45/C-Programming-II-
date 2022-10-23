#include <stdio.h>
#include <conio.h>
double power(double x,int n)
{
if(n==1)
return x;
else
return x*power(x,n-1);
}
void main()
{
printf("%f",power(2.0,8));
getch();
}
