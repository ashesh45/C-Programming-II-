#include <stdio.h>
#include <conio.h>
#define M 4
#define N 5
void main()
{
float A[10][10],B[10][10],C[10][10];
int m,n,j,i;
do{
printf("Enter no. of rows and column for matrix:");
scanf("%d%d",&m,&n);
}while(m>N||n>N||m<=0||n<=0);
printf("\nEnter the values of first matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%f",&A[i][j]);
}
}
printf("\nEnter the value of second matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%f",&B[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
C[i][j]=A[i][j]+B[i][j];
}
}
printf("\nSum of the two matrices:\n");
}
