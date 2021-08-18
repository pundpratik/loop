//wap to find LARGEST  OF 2 NUMBER
#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter any two number");
	scanf("\n %d%d",&a,&b);
	if(a>b)
	{
		printf("\n %d is greatest ",a);
	}
	if(a<b)
	{
		printf("\n %d is greatest ",b);
	}
	if(a==b)
	{
		printf("\n %d is greatest ",a);
	}
	return 0;
}
