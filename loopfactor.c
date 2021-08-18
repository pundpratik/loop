#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("\n enter any number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
		
	}
	printf("\n %d factorial is = %d",n,f);
	return 0;
}
