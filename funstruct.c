#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float per;
} s1={101,"Lisa",98.90},s2;
int main()
{
	struct student s3={103,"Rose",98.00};
	printf("enter s2 value");
	scanf("%d %s %f",&s2.rno,&s2.name,&s2.per);
	display(s1);
	display(s2);
	display(s3);
	return 0;
}
	void display(struct student s)
	{
		printf("\n %d %s %f",s.rno,s.name,s.per);
		
	}

