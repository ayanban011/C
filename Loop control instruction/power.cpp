#include<stdio.h>
int main()
{
	int i,n,m,pow=1;
	printf("Enter the base\n");
	scanf("%d",&n);
	printf("Enter the power\n");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
		pow*=n;
	printf("%d power %d = %d",n,m,pow);
	return 0;
}
