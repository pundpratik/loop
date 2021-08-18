#include<stdio.h>
int main()
{
	int x,y;
	printf("\n enter the co-ordinates");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("\npoint (x,y)= the co ordinates are in 1 quadrant");
	}
	if(x<0 && y>0)
	{
		printf("\npoint (x,y)= the co ordinates are in second quadrant");
	}
	if(x<0 && y<0)
	{
		printf("\npoint (x,y)= the co ordinates are in third quadrant");
	}
	if(x>0&&y<0)
	{
		printf("\npoint (x,y)= the co ordinates are in fourth quadrant");
	}
	if(x==0 && y!=0)
	{
		printf("\npoint (x,y)= the co ordinates are on y axis");
	}
	if(x!=0 && y==0)
	{
		printf("\npoint (x,y)= the co ordinates are on x axis");
	}
	if(x==0 && y==0)
	{
		printf("\npoint (x,y)= the co ordinates are origin");
	}
	return 0;
}
		
		
		
			
