#include<stdio.h>                           
int main()
{int a;
int fibonacci(int a);
scanf("%d",&a);
printf("��%d�����Ϊ%d\n",a,fibonacci(a));
return 0;}
int fibonacci(int a)
{int c;
if(a==1||a==2) c=1;
else
c=fibonacci(a-1)+fibonacci(a-2);
return(c); }
