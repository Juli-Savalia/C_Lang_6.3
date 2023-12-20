#include<stdio.h>

void main()
{
	int i,factorial,n;
	
	printf("Enter any number :-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("numbers are:- %d \n",i);
		factorial = factorial * i;
	}
	printf("your factorial number is :- %d",factorial);
}
