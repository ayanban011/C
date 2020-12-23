#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter any 5 digit number: ");
	scanf("%d",&n);
	i = 5;
	printf("Reverse of the number: ");
	while(i>0)
	{
		printf("%d",n%10);
		n = n/10;
		i--;
	}
	printf("\n");
	return 0;
}
