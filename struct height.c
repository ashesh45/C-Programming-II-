#include <stdio.h>
#include <conio.h>
{
struct height p;

int feet,;
int inches;
}
//typedef struct height HEIGHT;
void printHeight(struct height p);
{
    printf("\n%d feet %d inches",p.feet,p.inches);
}
struct height addHeight(struct height p1,struct height p2)
{
    struct height p3;
    p3.feet=p1.feet+p2.feet;
    p3.inches=p1.inches+p2.inches;

    if(p3.inches>=12)
    {
     p3.inches-=12;
     p3.feet++;
    }
return p3;
}
void main()
{
    struct height ashesh=(5,4),babin,both;
    printf("Enter the height of babin in feet and inches:");
    scanf("%d%d",&babin.feet,&babin.inches);

    both=addHeight(ashesh,babin);
    printHeight(both);
}
}
