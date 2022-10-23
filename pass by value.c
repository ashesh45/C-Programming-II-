#include <stdio.h>
#include <conio.h>
void makeDouble(int x)
{
x=2*x;
printf("\nx=%d",x);
}
void main()
{
int y=50;
makeDouble(y);
printf("\ny=%d",y);
getch();
}
