#include <stdio.h>
#include <conio.h>
float calculateVolume(float,float);
void main()
{
float v1,v2;
float r,h;
scanf("%f%f",&r,&h);
v1=calculateVolume(r,h);
v2=v1+calculateVolume(3,2);
printf("%f",calculateVolume(20,30));
getch();
}
float calculateVolume(float r, float h)
{
float v;
v=3.14159265*r*r*h;
return v;
}
