//to print a no seq in 121314212324313234//
#include <stdio.h>
#include <conio.h>
void main()
{
int i,j;
for(i=1;i<=3;i++)
{
for(j=1;j<=4;j++)
{
if(i==j)continue;
printf("\n %d%d",i,j);
}
}
}
