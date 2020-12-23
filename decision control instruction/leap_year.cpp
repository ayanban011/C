#include<stdio.h>
void lp1(int y)
{
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				printf("%d is the leap year\n",y);
			}
			else
			{
				printf("%d is not a leap year\n",y);
			}
		}
		else
		{
			printf("%d is the leap year\n",y);
		}
	}
	else
	{
		printf("%d is not the leap year\n",y);
	}
}
void lp2(int y)
{
	if((y%100==0 && y%400==0) || (y%100!=0 && y%4==0))
		printf("%d is a leap year\n",y);
	else
		printf("%d is not a leap year\n",y);
}
int main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	lp1(year);
	lp2(year);
	return 0;
}
