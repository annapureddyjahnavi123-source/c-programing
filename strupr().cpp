#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enetr string name");
	scanf("%s",&s);
	strupr(s);
	printf("upper case string=%s",s);
	return 0;
}
