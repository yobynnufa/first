#include<stdio.h>
int main ()
{
int i,j,sum=0;
double ave;
int a[3][4];
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{scanf("%d",&a[i][j]);}
}
for(i=0;i<3;i++)
{sum=0;
for(j=0;j<4;j++)
{
sum+=a[i][j];ave=sum/4.0;
}
printf("第%d名学生平均成绩%f\n",i+1,ave);
}
for(j=0;j<4;j++)
{
sum=0;
for(i=0;i<3;i++)
{sum+=a[i][j];ave=sum/3.0;}
printf("第%d门课平均成绩%f\n",j+1,ave);
} 
return 0;
}
