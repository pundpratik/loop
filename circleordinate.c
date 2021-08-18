#include<stdio.h>
int main()
{
	int x,y,xy;
	float r,rr;
	printf("\n enter the co-ordinate of a point");
	scanf("%d%d",&x,&y);
	printf("\n enter the radious of circle");
	scanf("%f",&r);
	xy=(x*x)+(y*y);
	rr=(r*r);
	if(xy==rr)
	{
		printf("\n %d %d point is on the circle",x,y);
	}
	if(xy>rr)
	{
		printf("\n %d %d point is outside the circle",x,y);
	}
	if(xy<rr)
	{
		printf("\n %d %d point is inside the circle",x,y);
	}
	if(x==0 && y==0)
	{
		printf("\n %d %d point is origin of a circle",x,y);
	}
	return 0;
}
