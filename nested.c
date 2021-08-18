#include<stdio.h>
int b=10;//global variable
int z=9;
int main()
{
	int b=5;//local variable
	printf("%d\n",b);
	
		{
		extern int b;// keyword for access global variable
		
		
		printf("\n %d",b);
		}
		printf("\n z=%d",z);

	
	void akshay()//user definr funested function
	{
		int a=3;//local variable
		printf("\n %d",a);
	
		
	}
	
	akshay();//function call
	return 0;
}
