//To show ASCII value randomly while pressing the buttom key//
#include <stdio.h>
#include <conio.h>
 void main()
 {
 unsigned char ch;
 do
    {
        printf("Press any Key:\n");
        ch=getch();
 printf("\nASCII value=%d",ch);
    }while(ch!=27);
 }
