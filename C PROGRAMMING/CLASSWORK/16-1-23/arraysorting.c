#include<stdio.h>

int main()
{
	int rollno[5];
	int i;
	int j,t;
	
	for(i=0;i<5;i++)
		{
			printf("Enter Element [%d] = ",i);
			scanf("%d",&rollno[i]);
		}
	for(i=0;i<5;i++)
		{
			printf("\tElement of Index [%d] = %d\n",i,rollno[i]);
		}
			
	printf("\n\n\t\t Accending Order");
	for (i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
			{
				if( rollno[i] > rollno[j] )
					{
						t = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = t;
					}
			}
	}
	for(i=0;i<5;i++)
	{
		printf("\n\t\tElement of index[%d] = %d",i,rollno[i]);
	}
	
}