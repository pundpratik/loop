#include<stdio.h>
int main()
{
	int x,y,r,xy,rr;
	printf("\n enter the co-ordinates");
	scanf("%d%d",&x,&y);
	printf ("\n enter the radious");
	scanf("%d",&r);
	xy=(x*x)+(y*y);
	rr=(r*r);
	if(xy==rr)
	{
		printf("\npoint (x,y) on  the circle");
	}
	else if(xy<rr)
	{
		printf("\npoint (x,y)in the circle");
	}
	else if(xy>rr)
	{
		printf("\npoint (x,y)outside the circle");
	}
	
	else
	{
		printf("\npoint (x,y)= the co ordinates are origin,center");
	}
	return 0;
}
		
		
		
			
