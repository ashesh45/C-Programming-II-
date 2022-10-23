#include <stdio.h>
#include <conio.h>
{
int i; float sum;
stuct student s;
printf("Enter name:");
gets(s.name);
printf("Enter age:");
scanf("%d",&s.age);
printf("Enter the marks for s subjects:");
sum=0;
for(i=0;i<5;i++)
{
scanf("%f",&s.marks[i]);
}
s.percent=sum/5;
printf("\nMarks obtained by %s:",s.name);
for(i=0;i<5;i++)
printf("\n%f",s.marks[i]);
printf("\nPercentage scored by %f",s.percent);
getch();
}
