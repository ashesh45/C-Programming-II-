#include <stdio.h>
#include <conio.h>
#define N 7
void main()
{
float x[N]={5,-32,0,95,6,100,90},khali;
int pass,j;
for(pass=0;pass<N-1;pass++)
{
for(j=0;j<N-pass-1;j++)
{
if(x[j]>x[j+1])
{
khali=x[j];
x[j]=x[j+1];
x[j+1]=khali;
}
}
}
printf("Values is sorted order:\n");
for(j=0;j<N;j++)
printf("\n%f",x[j]);
getch();
}
