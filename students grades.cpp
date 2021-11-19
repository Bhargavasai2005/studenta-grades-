#include<stdio.h>

int main()
{
	float s1,s2,s3,s4,s5,s6,per;
	
	printf("enter marks of 6 subjects \n ");
	scanf("%f %f %f %f %f %f",&s1,s2,s3,s4,s5,s6);
	
	per=(s1+s2+s3+s4+s5+s6)/6.0;
	if (per>=85)
	{
		printf("GRADE A\n");
	}
	else
	{
	if (per>=70)
	{
	printf("GRADE B\n");
	}
	else
	{
	if(per>=55)
	{
		printf("GRADE C\n");
	}
	else
	{
	if(per>=40)
	{
		printf("GRADE d\n");
	}
	else
	{
	printf("GRADE f\n");}
									
	
