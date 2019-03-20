#include<stdio.h>
int main()
{
int a[10];
int b[10];
int i,j,k=0;
for(i=0;i<10;i++)
{scanf("%d",&a[i]);}
for(i=0;i<10;i++)
{
for(j=0;j<k;j++)
{if(a[i]==b[j])
{
break;
}}
 if(j==k){b[k++]=a[i];}
}    
for(j=0;j<k;j++)
{printf("%d ",b[j]);}
return 0;}
