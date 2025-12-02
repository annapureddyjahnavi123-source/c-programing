#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int l,i;
	printf("enter string 1 name");
	scanf("%s",&s1);
	printf("enter string 2 name");
	scanf("%s",&s2);
	for(i=0;s1[i]!='\0';i++)
	{
		s1[l++]=s2[i];
	}
	s1[l]='\0';
	printf("merge string=%s",s1);
	return 0;
}
