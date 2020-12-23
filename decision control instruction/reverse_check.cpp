#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,rev=0,temp;
	printf("Enter a 5 digit number\n");
	scanf("%d",&n);
	i = 4;
	temp = n;
	while(i>=0)
	{
		rev += ((temp%10)*pow(10,i));
		//printf("%d",rev);
		temp = temp/10;
		i--;
	}
	if(rev == n)
		printf("%d == %d\n",n,rev);
	else
		printf("%d != %d\n",n,rev);
	return 0;
}
