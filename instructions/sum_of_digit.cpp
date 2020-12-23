#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter any 5 digit number: ");
	scanf("%d",&n);
	i = 5;
	while(i>0)
	{
		sum+= n%10;
		n = n/10;
		i--;
	}
	printf("sum of the digits: %d\n",sum);
	return 0;
}
