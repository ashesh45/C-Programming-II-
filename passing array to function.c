#include <stdio.h>
#include <conio.h>
float arraysum(float x[],int n)
{
float sum=0;
int i;
for(i=0;i<n;i++)
sum+=x[i];
return sum;
}
void main()
{
float y[]={10,20,30,40,50};
printf("%f",arraysum(y,5));
}
