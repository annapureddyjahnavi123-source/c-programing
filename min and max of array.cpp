#include<stdio.h>
int main()
{
	int a[100],n,i,min,max;
	printf("enter size of the array");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		else if(max<a[i])
		max=a[i];
	}
	printf("minimum=%d",min);
	printf("\n maximum=%d",max);
	return 0;
}
