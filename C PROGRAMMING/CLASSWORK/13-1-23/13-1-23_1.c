#include<stdio.h>

int main()
{
	int arr1[5] = {10,20,30,40,50};
	int i;
	printf("%d\n\n",sizeof(arr1));
/*	printf("%d\n",arr1[0]);
	printf("%d\n",arr1[1]);
	printf("%d\n",arr1[2]);
	printf("%d\n",arr1[3]);
	printf("%d\n",arr1[4]);
*/	
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr1[i]);	
	}
}