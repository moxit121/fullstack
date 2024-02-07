#include<stdio.h>

int main()
{
	int arr1[3],arr2[3];
	int i;
	
	printf("\nArray 1:\v ");
	for(i=0;i<3;i++)
	{
		printf("Enter Element [%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("\nArray 2:\v");
	for(i=0;i<3;i++)
	{
		printf("ENter Element [%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	printf("--------------------------------");
	printf("\vAddition of 2 Arrays : \n");
	
	for(i=0;i<3;i++)
	{
		printf("\n Addition of Array is [%d] : %d ",i,arr1[i]+arr2[i]);
	}
}