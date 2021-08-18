#include<stdio.h>
int main()
{
	int square,sl,rect,l,b,a;

	printf("if you want rectanle then press 1");
	scanf("%d",&a);
	if(a==1)
	{
	
		printf("enter the value of side of the square");
		scanf("%d",&sl);
		square=4*sl;
		printf("\n parameter of sqaure =%d",square);

	
	}

	else
	{
	
			printf("\nenter the length and width of rectangle");
			scanf("%d%d",&l,&b);
			rect=2*(l+b);

			printf("the parameter of rectangle is %d",rect);
	
	}
	
		
	
	
	return 0;
}
