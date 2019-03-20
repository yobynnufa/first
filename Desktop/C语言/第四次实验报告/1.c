#include<stdio.h>
int main()
{
int i,j,s;
printf("¾Å¾Å³Ë·¨±í¿Ú¾÷\n");
for(i=1;i<10;i++)
{for(s=2;s<=i;s++)
printf("\t");
for(j=i;j<10;j++)

printf("%d*%d=%d\t",i,j,i*j);
printf("\n");
}
return 0;
}
