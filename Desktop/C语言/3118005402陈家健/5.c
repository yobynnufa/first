#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,d,x1,x2,x3
;
printf("按顺序输入各项系数");
scanf("%lf,%lf,%lf",&a,&b,&c);
if(a==0)
printf("这不是二元一次方程\n");
else
{
d=b*b-4*a*c;
if(d<0)
{printf("该方程无实数根\n");}
if(d>0)
{x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("该方程有两个实数根:%8.4f和%8.4f\n",x1,x2);}
if(d==0)
{x3=-b/(2*a);
printf("方程有一个实数根:%8.4f");}}
return 0;}
