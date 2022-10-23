#include <stdio.h>
#include <conio.h>
void main()
{
FILE *fp;
int ch;
fp=fopen("data2.txt","r");
while(1)
{
    ch=fgetch(fp);
if(ch==EOF)break;
printf("%c",ch);
}
fclose(fp);
getch();
}
