#include<stdio.h>

void main()
{
	int i,n,multiply;
	
	printf("Enter the number of table you want to print :-");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
