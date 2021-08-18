#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("\n a=%d is smallest number",a);
		}
		else
		{
			printf("\n c=%d is smallest number",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("\n b=%d is smallest number",b);
		}
		else
		{
			printf("\n c=%d is smallest number",c);
		}
	}
	return 0;
}
