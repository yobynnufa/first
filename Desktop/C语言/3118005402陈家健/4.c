#include<stdio.h>
int mian()
{
int a,b;
printf("������һ����λ��");
scanf("%d",&a);
b=a/100+(a%100)/10+a%10;
printf("����λ����λ����Ϊ%d\n",b);
return 0;
}
