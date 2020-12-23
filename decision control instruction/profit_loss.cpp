#include<stdio.h>
int main()
{
	float cp,sp;
	printf("Enter Cost Price: ");
	scanf("%f",&cp);
	printf("Enter Sell Price: ");
	scanf("%f",&sp);
	if(cp>sp)
	{
		printf("Loss: %f\n",cp-sp);
	}
	else
	{
		printf("profit: %f\n",sp-cp);
	}
}
