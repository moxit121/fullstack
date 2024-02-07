// WAP to show
//1. Monday to Sunday using switch case
//2. Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
	int week,ch;
	printf("Enter number of in week(1-7) = ");
	scanf("%d",&week);
	
	
	switch(week)
	{
		case 1:
			printf("\nMonday");
			break;
		case 2:
			printf("\nTuesday");
			break;
		case 3:
			printf("\nWednesday");
			break;
		case 4:
			printf("\nThursday");
			break;
		case 5:
			printf("\nFriday");
			break;
		case 6:
			printf("\nSaturday");
			break;
		case 7:
			printf("\nSunday");
			break;
	}
	switch(ch)
		{
		case 'a':
			printf("\n Enter character is vowel : %c",ch);
			break;
		case 'e':
			printf("\n Enter character is vowel : %c",ch);
			break;
		case 'i':
			printf("\n Enter character is vowel : %c",ch);
			break;
		case 'o':
			printf("\n Enter character is vowel : %c",ch);
			break;
		case 'u':
			printf("\n Enter character is vowel : %c",ch);
			break;
	}
	
}