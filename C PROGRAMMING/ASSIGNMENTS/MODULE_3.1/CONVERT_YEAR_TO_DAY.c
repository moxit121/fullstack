#include<stdio.h>

//convert year to day

void main()
{
	float day,year,cnvrt_year,cnvrt_day;
	printf("--------------------------------");
	printf("\n\t Enter Days = ");
	scanf("%f",&day);
	cnvrt_year = day/365;
	printf("\t Converted Days In To Year = %.0f",cnvrt_year);
	
	printf("\n--------------------------------");
	
	printf("\n\t Enter Year = ");
	scanf("%f",&year);
	cnvrt_day = year*365;	
	printf("\t Converted Years In TO Day = %.0f",cnvrt_day);
}