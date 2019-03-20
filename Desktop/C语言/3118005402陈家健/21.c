#include<stdio.h>
int main () 
{
	char a[]="kkkkkkkkkkkk",b[50]={0};
	void*insert(char*a,char*b);
	insert(a,b);
	printf("%s\n%s",a,b);
	return 0;
}
void*insert(char*a,char*b)
{
	int cnt1=0,cnt2=1;
	for(cnt1=0;a[cnt1]!='\0';cnt1++,cnt2+=2)
	{
		b[cnt2-1]=' ';
		b[cnt2]=a[cnt1];	
	}
}
