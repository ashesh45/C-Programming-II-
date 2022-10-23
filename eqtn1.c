#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float a,b,c,d,x1,x2,rroot,iroot,root;
printf("Enter a,b,c");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
printf("the root are %f%f",x1,x2);
}
else if(d==0)
{
root=-b/2*a;
printf("the root is %.2f",root);
}
else if (d<0)
{
iroot=(sqrt(d)/2*a);
rroot=-b/2*a;
printf("the root is %f and real root is %f,iroot,rroot");
}
else
{
printf("finish");
}
getch();
}
