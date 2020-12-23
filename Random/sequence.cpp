#include<stdio.h>
int facto(int n)
{
	int f=1;
	if(n==0||n==1)
		return 1;
	else
	{
		f*=facto(n-1);
		return f;
	}
}
int main()
{
	int i,n,sum=0,f;
	printf("Enter upto to what extent the sequence should print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f = facto(i);
		printf("%d/%d! + ",i,i);
		sum+=i/f;
	}
	printf("\n");
	printf("Result: %d\n",sum);
	return 0;
}
