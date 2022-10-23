#include <stdio.h>
#include <conio.h>

{
        char name[50];
        int age;
        float marks[5];
        float percent;
};
void main()
{
int i,struct student s;
float sum;
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
sum+=s.marks[i];
}
s.percent=sum/5;
printf("\nMarks obtained by %s:",s.name);
for(i=0;i<5;i++)
printf("\n%f",s.marks[i]);
printf("\n Percentage scored by %f",s.percent);
getch();
}
