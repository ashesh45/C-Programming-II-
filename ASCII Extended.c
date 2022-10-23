#include <stdio.h>
#include <conio.h>
void main()
{
unsigned char ch;
do{
printf("Press any Key:");
ch=getch();
printf("ASCII value=%d",ch);
if (ch==0)
{
ch=getch();
printf("Extended value=%d",ch);
}
}while(ch!=27);
    getch();
}

