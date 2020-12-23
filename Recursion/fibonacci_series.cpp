#include<stdio.h>
int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
	{
		return(fib(n-1)+fib(n-2));
	}
}
int main()
{
	int n,i,a=0,b=1,c,d=0,res;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Fibonacci number: %d %d ",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
	printf("%d",fib(d));
	d++;
	}
	return 0;
}
