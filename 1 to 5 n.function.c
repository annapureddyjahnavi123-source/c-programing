#include<stdio.h>
void sum(long int);
int main()
{
	long int n;
	printf("enter any number");
	scanf("%ld",&n);
	sum(n);
	return 0;
}
void sum(long int n)
{
	long int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum=%ld",sum);
}
