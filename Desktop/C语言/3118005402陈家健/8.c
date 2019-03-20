#include<stdio.h>
int main()
{
int i,j;
printf("¾Å¾Å³Ë·¨±í¿Ú¾÷\n");
for(i=1;i<10;i++)
{
for(j=1;j<i+1;j++)
printf("%d*%d=%d\t",i,j,i*j);
printf("\n");
}
return 0;
}
