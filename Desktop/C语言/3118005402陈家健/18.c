#include <stdio.h>
int main(){
    int average1(int str1[][5],int m,int n);
    int average2(int str1[][5],int m,int n);
    int average3(int str1[][5],int m,int n);
    int average4(int str1[][5],int m,int n);
    int a[10][5]={{70,80,90,40,50},{60,70,80,30,50},{90,80,90,93,94},{100,80,96,95,94},{50,60,70,90,67},{71,83,90,40,50},{67,70,88,30,50},{90,86,90,93,94},{100,80,93,95,94},{50,60,50,90,67}};
    printf("ÿ��ѧ����ƽ���ɼ�\n");
    average1(a,10,5);
    printf("ÿ�ſε�ƽ���ɼ�\n");
    average2(a,10,5);
    average3(a,10,5);
printf("�ܵ�ƽ����:");
    average4(a,10,5);
    return 0;}
int average1(int str1[][5],int m,int n){
    int i,j,sum=0,avg[50];
    for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
      {sum+=str1[i][j];}
         avg[i]=sum/n;
        printf("%d\n",avg[i]);
        sum=0;
    }
    return 0;
        }
 int average2(int str1[][5],int m,int n)
{ int i,j,sum=0,avg2;
    for(j=0;j<n;j++)
    { for(i=0;i<m;i++)
    {sum+=str1[i][j];}
        avg2=sum/m;
        printf("%d\n",avg2);
        sum=0;
    }
    return 0;
}
int average3(int str1[][5],int m,int n)
{ int max=str1[0][0];
    int p,k,i,j;
    for(i=0;i<10;i++)
    {for(j=0;j<5;j++)
        {if(str1[i][j]>max)
          { max=str1[i][j];
            k=i+1;
            p=j+1;
               }
         }
   }
    printf("��߷ֶ�Ӧѧ���Ϳγ�\n");
    printf("max=%d,k=%d,p=%d",max,k,p);
    return 0;}
int average4(int str1[][5],int m,int n)
{
    int p=0.0,i,j;
float k=0.0,sum=0.0;
    for(j=0;j<5;j++)
    {for(i=0;i<10;i++)
        {p+=str1[i][j];}
  }sum+=p;	k=sum/50.0;
    printf("%7.2f",k);
	
    return 0;}
