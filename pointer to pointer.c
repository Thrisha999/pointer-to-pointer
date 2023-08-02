#include<stdio.h>
void main()
{
    int a=10,b=5,*p1,*p2,**p3;
   /* printf("enter the value of a,b:\n");
    scanf("%d %d",&a,&b);*/
	p1=&a;
    p2=&b;
    p3=p1;
	printf("value of a=%d\n",a);
	printf("value of a=%d\n",*p1);
	printf("address of a=%d\n",&a);
	printf("address of a=%d\n",p1);
	printf("value of p1=%d\n",p1);
	printf("value of p1=%d\n",*p3);
	printf("address of p1=%d\n",&p1);
	printf("address of p1=%d\n",p3);			
}
