#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
i=1;
again:
    if(i>10)goto again;
    printf("\n%d",i);
    i++;
    goto again;
    finish:
getch();
printf("%d",i);
}


