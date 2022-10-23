#include <stdio.h>
#include <conio.h>
void calculateVolume(float r, float h)
{
    float v;
    v=3.14159265*r*r*h;
    printf("\nVolume is %f",v);
}
void main()
{
    calculateVolume(2,3);
    calculateVolume(3,2);
    getch();
}

