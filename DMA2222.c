#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
int n,i,x;
float*p,sum=0;
printf("Enter no. of data:");
scanf("%d",&x);
p=(float*)calloc(n,sizeof(float));
if(p==0)
printf("Error");
else
{
printf("Enter your data:");
for(i=0;i<n;i++)
{
    scanf("%f",(p+i));
    sum+=*(p+i);
}
printf("%f",sum);
free(p);
}
}

