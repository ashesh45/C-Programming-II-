#include <stdio.h>
#include <conio.h>
float arraysum(float*x,int n)
{
float sum=0;
int i;
for(i=0;i<n;i++)
sum+=*(x+1);
return sum;
}
void main()
{
float y[]={10,20,30,40,50};
float z[]={1,2,3,4,5,6,7};
float w;
printf("Sum of z=%f",arraysum(z,7));
printf("\nSum of y=%f",arraysum(y,5));
w=arraysum(y,3)+arraysum(z,3);
printf("\nSum of z and y(upto 3rd items of each)=%f",w);
}
