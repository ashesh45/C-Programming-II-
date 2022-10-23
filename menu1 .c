//A Menu driven program to calculate volume of either of the following solid shapes using if else condition//
#include <stdio.h>
#include <conio.h>
#define pi 3.1416
int main()
{
int menu,r,h,vol,w,l;
printf("\n Press 'a' for cylinder");
printf("\n Press 'b' for sphere");
printf("\n Press 'c' for cone");
printf("\n Press 'd' for pyramid");
printf("\n Press 'e' for Exit");
scanf("%c",&menu);
system("cls");
if ((menu=='a')||(menu=='A'))
{
    printf("\n Enter radius and height");
    scanf("%d%d", &r,&h);
    vol=pi*r*r*h;
    printf("\n volume is:%d",vol);
}
if ((menu=='b')||(menu=='B'))
{
    printf("\n Enter radius");
    scanf("%d",&r);
    vol=(4*pi*r*r*r)/3;
    printf("\n volume is:%d",vol);
}
if ((menu=='c')||(menu=='C'))
{
    printf("\n Enter radius and height");
    scanf("%d%d",&r,&h);
    vol=(pi*r*r*h)/3;
    printf("\n volume is:%d",vol);
}
if((menu=='d')||(menu=='D'))
{
    printf("\n Enter length,width and height");
    scanf("%d%d%d",&l,&w,&h);
    vol=(l*w*h)/3;
    printf("\n volume is:%d",vol);
}
if((menu=='e')||(menu=='E'))
{
    printf("\n Exit");
}
else
    printf("invalid");
    system("pause");
    return 0;
}








