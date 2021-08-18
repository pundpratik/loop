#include<stdio.h>
int main()
{
	int i,j;
	for(i=65;i<=67;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c \t",j);//A=65 c=67
			
		}
		//printf("%c =%d\t",i,i);
		printf("\n");
	}
	return 0;
}
