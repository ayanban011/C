#include<stdio.h>
#include<math.h>
int main()
{
	int amount,c100=0,c50=0,c10=0,c5=0,c2=0,c1=0;
	printf("Enter the amount\n");
	scanf("%d",&amount);
	while(amount!=0)
	{
		if(amount>=100)
		{
			amount -= 100;
			c100+=1;
		}
		else if(amount>=50)
		{
			amount -=50;
			c50+=1;
		}
		else if(amount>=10)
		{
			amount-=10;
			c10+=1;
		}
		else if(amount>=5)
		{
			amount-=5;
			c5+=1;
		}
		else if(amount>=2)
		{
			amount-=2;
			c2+=1;
		}
		else if(amount>=1)
		{
			amount-=1;
			c1+=1;
		}
	}
	printf("Minimum number of notes used: %d\n",c100+c50+c10+c5+c2+c1);
	printf("Rs 100: %d\n",c100);
	printf("Rs 50: %d\n",c50);
	printf("Rs 10: %d\n",c10);
	printf("Rs 5: %d\n",c5);
	printf("Rs 2: %d\n",c2);
	printf("Rs 1: %d\n",c1);
	return 0;
}
