#include <stdio.h>
int main()
{
 double data,data1,data2;                                          
char op;
 scanf("%lf%c%lf",&data1,&op,&data2);
	 switch(op)
		{case '+':data=data1+data2;break;
		 case '-':data=data1-data2;break;
		 case '*':data=data1*data2;break;
		 case '/':if(data2!=0)data=data1/data2;
			 else{printf("除数不能为0！");}  
return 0;
	 }
printf("%g%c%g=%g\n",data1,op,data2,data);
return 0;
}
