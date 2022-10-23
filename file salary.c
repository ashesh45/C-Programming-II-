#include <stdio.h>
#include <conio.h>
{
typedef struct
{
char name[40];
int age;
float salary;
EMPLOYEE n;
}
void main()
{
FILE *fp;
EMPLOYEE e[3]={{"Ashesh",23,12000}},
               {"Akash",56,67000}},
               {"Rakesh",45,45000}
               };
EMPLOYEE n;

fp=fopen("bindata.bin","wb+");
if(fp==NULL)
{
printf("Error opening file!");
getch();
return();
}
fwrite(e,sizeof(EMPLOYEE),3,fp);
rewind(fp);
while(fread(&n,sizeof(EMPLOYEE),1,fp)==1)
{
printf("\n%s%d%f",n.name,n.age,n.salary)
}
fclose(fp);
}

