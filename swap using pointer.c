#include <stdio.h>
#include <conio.h>
void swapByVal(float,float);
void swapByRef(float*,float*);
void main()
{
float x=5.0,y=6.0;
float p=5.0,q=6.0;
swapByVal(x,y);
printf("\n%f%f",x,y);

swapByRef(&p,&q);
printf("\n%f%f",p,q);
}
void swapByVal(float a,float b)
{
float c;
c=a;
a=b;
b=c;
}
void swapByRef(float*a,float*b)
{
float c;
c=*a;
*a=*b;
*b= c;
}
