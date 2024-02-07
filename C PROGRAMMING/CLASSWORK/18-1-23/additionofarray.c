#include<stdio.h>

int main()
{
	int matrix1[3][3],matrix2[3][3];
	int i,j;
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Enter Matrix1 \xB2\xB2\xB2\xB2\xB2\n");
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tEnter element of Matrix1[%d][%d] = ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Enter Matrix2 \xB2\xB2\xB2\xB2\xB2\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tEnter element of Matrix2[%d][%d] = ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
		printf("\n");
	}
	
					//display of two matrix
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Display Matrix1 \xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<3;i++)
	{
		printf("\t ");
		for(j=0;j<3;j++)
		{
			printf("\t%d",matrix1[i][j]);	
		}
		printf("\n");
	}
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Display Matrix2 \xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<3;i++)
	{
		printf("\t ");
		for(j=0;j<3;j++)
		{
			printf("\t%d",matrix2[i][j]);	
		}
		printf("\n");
	}
	
	// addition of two matrix
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Addition of matrix \xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<3;i++)
	{
		printf("\t ");
		for(j=0;j<3;j++)
		{
			printf("\t%d",(matrix1[i][j] + matrix2[i][j]));
		}
		printf("\n");
	}
	
	// subtraction
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Subtraction of matrix \xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<3;i++)
	{
		printf("\t ");
		for(j=0;j<3;j++)
		{
			printf("\t%d",(matrix1[i][j] - matrix2[i][j]));
		}
		printf("\n");
	}
	
	//multiplication
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Multiplication of matrix \xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<3;i++)
	{
		printf("\t ");
		for(j=0;j<3;j++)
		{
			printf("\t%d",(matrix1[i][j] * matrix2[i][j]));
		}
		printf("\n");
	}
}