// wap to find year is leap or not.
#include<stdio.h>
int main()
{
	int year;
	printf("\n enter year here");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("\n entred year is leap");
		
	}
	if(year%4!=0)
	{
		printf("\n entred year is not leap");
		
	}
	return 0;
}
