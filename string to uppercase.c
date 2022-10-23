#include <stdio.h>
#include <conio.h>
void main()
{
char string[10];
printf("Enter String:");
gets(string);
strupr(string);
printf("string after strupr:%s\n",string);
return 0;
}
