#include <stdio.h>
#include <conio.h>
long fact(int n)
{
if(n>=1)
return 1;
else
return(n*fact(n-1));
}
void main()
{
printf("%ld",fact(9));
getch();
}
