#include <stdio.h>
int prime(int i);
void main()
{ 
 int n ;
 scanf("%d",&n);
 if (prime(n)==1)
 printf("YES");
 else
 printf("NO\n");
}
int prime(int i)
{
 int a;
 for(a=2;a<i;a++)
 if(i%a==0)break;
 if(a>=i)return 1;
 else return 0;
}
