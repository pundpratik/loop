#include<stdio.h>
int main()
{
	int x,y;
	printf("\n enter the co-ordinate of point");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("\n  %d %d point is in 1st quadrant",x,y);
		
	}
	else if(x<0 &&y>0)
	{
			printf("\n %d %d point is in 2nd quadrant",x,y);
	}
	else if(x<0 && y<0)
	{
		printf("\n %d %d point is in 3rd quadrant",x,y);
	}
	else if(x>0 && y<0)
	{
		printf("\n %d %d point is in 4th quadrant",x,y);
		
	}
	else if(x==0 && y!=0)
	{
		printf("\n %d %d point is on y-axis",x,y);
	}
	else if(x!=0 && y==0)
	{
		printf("\n %d %d point is on x-axis",x,y);
	
	}
	else
	{
		printf("\n %d %d point is origin",x,y);
	}
	return 0;
}
