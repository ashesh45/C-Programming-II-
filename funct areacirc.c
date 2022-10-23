#include <stdio.h>
#include <conio.h>
float circleArea(float radius)
{
float area=3.1416*radius*radius;
return area;
}
void main()
{
float r1,r2,r3,a1,a2,a3;
r1=3;
r2=4;
r3=5;
a1=circleArea(r1);
a2=circleArea(r2);
printf("%f%f%f",a1,a2,circleArea(r3));
a3=circleArea(r1)+circleArea(r2);
printf("\n%f",a3);
}
