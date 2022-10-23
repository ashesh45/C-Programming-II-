#include <stdio.h>
#include <conio.h>
void main()
{
int choice;
printf("\n Which of these websites you visit the most?");
printf("\n Select 1 for facebook,2 for twitter and 3 for Google");
printf("\n1=>facebook \n2=>twitter \n3=>Google\n");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n You use facebook");
break;
case 2:
printf("\n You use twitter");
break;
case 3:
printf("\n You use Google");
break;
default:
printf("\n You have entered invalid option");
}
}
