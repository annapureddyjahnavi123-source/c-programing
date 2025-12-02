#include<stdio.h>
int main()
{
	int a=10,*p,**q;
	p=&a;
	q=&p;
	printf("value of a=%d",a);
	printf("\n value of p=%d",*p);
	printf("\n vlue of q=%d",**q);
	return 0;
}
