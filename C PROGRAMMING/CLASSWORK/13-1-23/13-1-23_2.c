#include<stdio.h>

int main()
{
	int marks[5];
	int i;
/*	printf("%d\n",arr1[0]);
	printf("%d\n",arr1[1]);
	printf("%d\n",arr1[2]);
	printf("%d\n",arr1[3]);
	printf("%d\n",arr1[4]);
*/	
	for(i=0;i<5;i++)
	{	
		printf("Enter Element[%d] = ",i);
		scanf("%d",&marks[i]);
	}
		for(i=0;i<5;i++)
	{	
		printf("\vEnter Element index of[%d] = %d\n",i,marks[i]);
	}
}