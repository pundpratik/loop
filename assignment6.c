/*WAP to accept a number from user and find out sum of even digits from that given number.*/
#include<stdio.h>
int main()
{
	int num,i,f=0;
	printf("\n enter any number");
	scanf("%d",&num);
	
	
		for(i=1;i<=num;i++)
		{
			if(i%2==0)
			{
				f=f+i;
			}
		}
		printf("\n %d ",f);
	
	return 0;
}


