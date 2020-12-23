#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(i==5||j==5)
			printf("+");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
