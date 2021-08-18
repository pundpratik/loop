/*
Accept three numbers from user and find out largest number among three and also find out  whether that three numbers are equal or not.(else if ladder)
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\n A=%d is grater than b=%d and c=%d",a,b,c);
	}
	else if(a<b && b>c)
	{
		printf("\n B =%d is greater than a=%d and c=%d",b,a,c);
		
	}
	else
	{
		printf("\n C= %d is greatest number",c);
	}
	if(a==b && b==c)
	{
		printf(" \n three numbers are same");
	}
	else
	{
		printf("\n three numbers are not equal");
	}
	return 0;
}
