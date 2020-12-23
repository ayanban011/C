#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j;
	int min=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("enter numbers");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(min>a[i][j])
			min=a[i][j];
		}
	}
	printf("smallest number=%d",min);
	return 0;
}

