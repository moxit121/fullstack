#include<stdio.h>

int main()
{
	int rollno,total,s1,s2,s3;
	char name[20];
	float per;
	
	printf("\n Enter Your Name = ");
	gets(name);
	printf("\n Enter Your Roll No. = ");
	scanf("%d",&rollno);
	fflush(stdin);
	
	printf("\n Enter Marks of Physics = ");
	scanf("%d",&s1);
	printf("\n Enter marks of chemistry = ");
	scanf("%d",&s2);
	printf("\n Enter marks of Biology = ");
	scanf("%d",&s3);
	
	printf("\n Name = %s",name);
	printf("\n Roll No. = %d",rollno);
	
	total = s1+s2+s3;
	per = (float)total/3;
	printf("\n Total = %d",total);
	
	if(per>=75)
	{
		printf("\n Class : DIST");
	}
	else if(per>=60)
	{
		printf("\n class : FIRST");
	}
	else if(per>=50)
	{
		printf("\n class : SECOND");
	}
	else if(per>=40)
	{
		printf("\n class : PASS");
	}
	else 
	{
		printf("\n Class : Fail");
	}

	
}