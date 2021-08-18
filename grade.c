/*WAP a program to accept Percentage from user and check the GRADE
A. Above 70% - Grade A
B. Between 60% to 70% - Grade B+.
C. Between 45% to 60% - Grade B.
D. Between 35% to 45% - Grade C.
E. Less than 35% - Fail*/
#include<stdio.h>
int main()
{
	float per;
	printf("\nenter you percentage");
	scanf("%f",&per);
	if(per>70)
	{
		printf("\n you have a grade A");
	}
	else
	{
	
		if(60<per && per<70)
		{
			printf("\n you have a grade B+");
		}
		if(45<per&& per<60)
		{
			printf("\n you have a grade B");
		}
		if(35<per && per<45)
		{
			printf("\n you have a C grade");
		}
		if(35>per)
		{
			printf("\n you are fail");
		}
	}
	
	return 0;
}
