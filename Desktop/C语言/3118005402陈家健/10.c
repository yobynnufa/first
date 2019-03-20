#include<stdio.h>
int main()
{
int a[5];
int i,t,j,max,min,k;
for(i=0;i<5;i++)
{scanf("%d",&a[i]);}
max=min=a[0];
for(i=1;i<5;i++)
{
if(a[i]>=max)
{max=a[i];
j=i;}
else if(a[i]<=min)
{min=a[i];k=i;}
}
t=a[j];
a[j]=a[k];
a[k]=t;
for(i=0;i<5;i++)
{printf("%d ",a[i]);}
return 0;
}
