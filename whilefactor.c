#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("\n enter any number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	
	printf("\n %d factorial is = %d",n,f);
	return 0;
}
