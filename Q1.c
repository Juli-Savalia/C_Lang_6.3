//Write a Program to print the sum of all numbers from 1 to N using for loop.

#include<stdio.h>

void main()
{
	int i,n,sum=0;
	
	printf("Enter any number:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d \n",i);
		sum = sum + i;
	}
	printf("your sum of all numbers are :- %d",sum);
}
