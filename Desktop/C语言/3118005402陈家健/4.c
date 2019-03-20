#include<stdio.h>
int mian()
{
int a,b;
printf("请输入一个三位数");
scanf("%d",&a);
b=a/100+(a%100)/10+a%10;
printf("该三位数的位数和为%d\n",b);
return 0;
}
