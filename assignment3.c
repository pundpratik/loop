#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=9;i++,i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			
		}
		printf("*");
		printf("\n");
	}
	return 0;
}
