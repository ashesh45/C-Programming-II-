#include <stdio.h>
#include <conio.h>
void main()
{
float data[10],sum,avg;
int n,i,CountBelowAvg;
do{
printf("Enter the no. of data:");
scanf("%d",&n);
}while(n<=0||n>10);
sum=0;
for(i=0;i<n;i++)
{
printf("Enter the no. %d:",i);
scanf("%f",&data[i]);
sum+=data[i];
}
avg=sum/n;
printf("\nsum=%.4f",sum);
printf("\nsum=%.4f",avg);
printf("\nFollowing are the data below average:\n");
CountBelowAvg=0;
for(i=0;i<n;i++)
{
    if(data[i]<avg)
    {
        printf("\n%f",data[i]);
    CountBelowAvg++;
    }
}
printf("\nThere are %d data below average",CountBelowAvg);
getch();
}
