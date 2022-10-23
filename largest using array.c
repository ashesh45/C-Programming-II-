//To calculate largest,smallest and Range using Array//
#include <stdio.h>
#include <conio.h>
#define N 7
void main()
{
float x[N]={5,-32,0,95,6,100,90},largest,smallest;
int i;
largest=x[0];
smallest=x[0];
for(i=1;i<N;i++)
{
if(x[i]>largest)
{
largest=x[i];
}
if(x[i]<smallest)
{
smallest=x[i];
}
}
printf("Largest value=%.2f",largest);
printf("\nsmallest value=%.2f",smallest);
printf("\nRange=%f",largest-smallest);
getch();
}
