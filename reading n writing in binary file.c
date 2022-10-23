#include <stdio.h>
#include <conio.h>
void main()
{
FILE *fp;
int w,r;

fp=fopen("intdata.bin","wb+");
if(fp==NULL)
{
printf("Error opening file!");
getch();
return 0;
}
srand(time(NULL));
w=rand()%50+1;
printf("\nData being written:%d",w);
fwrite(&w,sizeof(int),1,fp);
rewind(fp);

if(fread(&r,sizeof(int),1,fp)==1)
{
printf("\nData read from data file");
printf("\n%d",r);
}
fclose(fp);
}
