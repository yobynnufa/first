#include<stdio.h>
void main()
{
	int i,a,b,c;
for(i=1;i<=99;i++)
{
a=i%10;
b=i/10;
while((a*b)>(a+b))
{printf("%d ",i);break;
}
}
for(i=100;i<=1000;i++)
{
a=i%10;
b=i/100;
c=(i/10)%10;
while((a*b*c)>(a+b+c))
{printf("%d ",i);break;
}
}
}
