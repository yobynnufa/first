#include<stdio.h>
int main ()
{
	int a,sum[4]={0,0,0,0,};
	do
	{scanf("%d",&a);
	if(a==1) sum[0]++;
if(a==2) sum[1]++;
if(a==3) sum[2]++;
if(a==4) sum[3]++;
	}while(a!=-1);
	printf("1:%d,2:%d,3:%d,4:%d\n",sum[0],sum[1],sum[2],sum[3]);
	return 0;}
