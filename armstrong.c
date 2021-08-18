/*WAP to check whether a number is Armstrong number.
*/
#include<stdio.h>
int armstrong(int num)
{
int r,sum=0,temp;
temp=num;

while(temp!=0)
{
r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;


}
printf("\nsum is %d:",sum);


if(sum==num)
{
printf("\n %d the number is armstrong:",num);

}
else
{
printf("\n %d the number is not armstrong:",num);
}
	
}

int main()
{
	int num;
	printf(":\n enter any vanlue");
	scanf("%d",&num);
	armstrong(num);
	return 0;
}
