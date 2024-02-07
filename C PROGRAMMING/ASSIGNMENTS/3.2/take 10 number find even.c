//2.WAP to take 10 no. Input from user and find out …
//3. How many Even numbers are there

#include<stdio.h>
int main()
{
	int i,num,even,odd,arr[10];
	printf("\n\tEnter Any 10 numbers\n");
	
	for(i=1;i<11;i++)
	{
		printf("\t Enter number[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\tNumbers = ");
	for(i=1;i<11;i++)
	{
		printf("%d ",arr[i]);
	}
	// find even numbers 
	printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\tEven numbers = ");
	for (i=1;i<11;i++)
	{
		
		if(arr[i]%2 == 0)
		{
			printf("%d, ",arr[i]);
		}
		else 
		{
		}
	}
	// find odd numbers 
	printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\t Odd Numbers = ");
	for (i=1;i<11;i++)
	{
		
		if(arr[i]%2 != 0)
		{
			printf("%d, ",arr[i]);
		}
		else 
		{
		}
	}
	
	
	
	
	
	
		
	
	
	
	
}