#include <stdio.h>
#include <conio.h>
#define N 3
typedef stuct student{
char name[50];
int age;
float marks[5];
float.total;
float.percent;
}
STUDENT;
void main()
{
STUDENT s[N];
int i,j;
for(i=0;i<N;i++)
{
printf("Enter the details of stds#%d:\n";
printf("Enter name;");
fflush(stdin);
gets(s[i].name);
printf("Enter the age");
fflush(stdin);
scanf("%d",&s[i],age);
printf("Enter marks in 5 subjects:");
s[i].total=0;
for(j=0;j<5;j++)
{
fflush(stdin);
scanf("%f",&s[i].marks[j]);
s[i].total+=s[i].marks[j];
}
s[i].percent=s[i].total/5;
}
printf("\nStudent Data:");
for(i=0;i<N;i++)
{
printf("\nName:%s",s[i].name);
printf("\nAge:%s",s[i].Age);
printf("\nTotal:%s",s[i].Total);
printf("\nPercent:%s",s[i].Percent);
}
}
