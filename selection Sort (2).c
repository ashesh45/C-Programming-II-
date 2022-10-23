#include <stdio.h>
#include <conio.h>
#define N 7
void main()
{
float x[N]={5,-32,0,95,6,100,90},khali;
int pass,j;
for(pass=0;pass<=N-2;pass++)
{
for(j=pass+1;j<=N-1;j++)
{
if(x[j]<x[pass])
{
khali=x[j];
x[j]=x[pass];
x[pass]=khali;
}
}
}
printf("Values is sorted order:\n");
for(j=0;j<N;j++)
printf("\n%f",x[j]);
getch();
}
