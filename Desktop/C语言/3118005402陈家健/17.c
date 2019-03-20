#include<stdio.h>
int main()
{
int f,a=1,b=1,i,c;
scanf("%d",&f);
for(c=3;c<=f;c++)
{
i=a+b;a=b;b=i;
}
printf("第%d项的数是%d",f,i);
return 0;
}
