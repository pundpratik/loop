#include<stdio.h>
int main()
{
	int price,stud;
	float amt;
	printf("\n enter the price of the product");
	scanf("%d",&price);
	printf("are you student if yes then press 1");
	scanf("%d",&stud);
	
	if(stud==1)
	{
		elseif(price>=500)
		{
			amt=(price/10%);
		
			printf("amount of product is %f",amt);
		}
		else
		{
			amt=(price/5%);
			printf("amount of product is %f",amt);
		}
	}
	else
	{
		if(price>500)
		{
			amt=(price/8%);
			printf("amount of product is %f",amt);
		}
		else
		{
			amt=(price/2%);
			printf("\n amount of product is %f",amt);
		}
	}
	return 0;
}
