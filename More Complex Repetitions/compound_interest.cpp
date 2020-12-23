#include<stdio.h>
#include<math.h>
int main()
{
	int a,p,r,q,n,i;
	for(i=1;i<=10;i++)
	{
		printf("Enter price: ");
		scanf("%d",&p);
		printf("Enter rate: ");
		scanf("%d",&r);
		printf("Enter year: ");
		scanf("%d",&n);
		printf("Enter quarter: ");
		scanf("%d",&q);
		a = p*pow((1+r/q),(n*q));
		printf("Compound Interest: %d\n",a);
	}
	return 0;
}
