#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,d,x1,x2,x3
;
printf("��˳���������ϵ��");
scanf("%lf,%lf,%lf",&a,&b,&c);
if(a==0)
printf("�ⲻ�Ƕ�Ԫһ�η���\n");
else
{
d=b*b-4*a*c;
if(d<0)
{printf("�÷�����ʵ����\n");}
if(d>0)
{x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("�÷���������ʵ����:%8.4f��%8.4f\n",x1,x2);}
if(d==0)
{x3=-b/(2*a);
printf("������һ��ʵ����:%8.4f");}}
return 0;}
