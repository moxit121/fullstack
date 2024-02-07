#include<stdio.h>
int main()
{
	int matrix1[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element of [%d][%d] = ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
		printf("\n");
	}
	

	printf("\n ----------------- Display Index ----------------\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element Index Of [%d][%d] = %d\n",i,j,matrix1[i][j]);
		}
		printf("\n");
	}
	
}