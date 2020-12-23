#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i+j>=5)
			{
				printf("%d",k);
				k++;
				printf(" ");
			}
			else
				printf(" ");
		}
		printf("\n");
		if(k>10)
			break;
	}
	return 0;
}
