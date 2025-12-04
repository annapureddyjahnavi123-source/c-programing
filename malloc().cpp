#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i;
	printf("enter n value");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter integer numbers");
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
	return 0;
}
