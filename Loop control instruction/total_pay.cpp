#include<stdio.h>
int main()
{
	int i,n,pay=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter the work hour of the %d employee\n",i);
		scanf("%d",&n);
		if(n>40)
		{
			pay+=((n-40)*12);
		}
	}
	printf("Total amount to pay: %d\n",pay);
}
