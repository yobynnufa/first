#include<stdio.h>

 	void fuc(int *p,int *p2)
	 {
	 	int max=0,n=0,b=0;
	 	for(n=0;n<15;n++)
	 	{
	 		if(p[n]>max)
	 		{
				max=p[n];b=n;
			}
		}
			p2[0]=max;
			p2[1]=(b-1)/5+1;
			p2[2]=(b+1)%5;
			if(p2[2]==0)
			p2[2]=5;
	 		 } 
	int main ()
{
	int *p,*p2,a[15]={92,95,90,100,70,85,90,10,80,10,50,40,50,60,40},c[3]={0};
	p=a;p2=c;
	fuc(p,p2); 
	printf("最高分为%d是第%d同学第%d门科目",c[0],c[1],c[2]);
	return 0;	
 }
