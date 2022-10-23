#include <stdio.h>
#include <conio.h>
void main()
{
FILE *fp;
int w[5]={10,20,30,40,50},r[5];
int n,i;

fp=fopen("intdata.bin","wb+");
if(fp==NULL)
{
printf("Error opening file!");
getch();
return 0;
}
fwrite(w,sizeof(int),5,fp);
rewind(fp);
n=fread(r,sizeof(int),5,fp);

printf("\nRead %d data",n);
printf("\nData read from data file");
for(i=0;i<n;i++)
{
printf("\n%d",r[i]);
}
fclose(fp);
}
