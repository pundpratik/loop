#include<stdio.h>
int main()
{
	int a;
	printf("\n enter any number");
	scanf("%d",&a);
	if(a<0)
	{
		printf("\n the enter value is negative");
	}
	else
	{
		if(a==0)
		{
			printf("\n entered value is zero");
		}
		else
		{
			printf("\n entered value is positive");
		}
	}
	return 0;
} 
