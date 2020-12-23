#include<stdio.h>
int main()
{
	int i,j,k=65;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=13;j++)
		{
			if(i>=2 && j>8-i && j<6+i)
				printf(" ");
			else
			{
				if(j<7)
				{
					printf("%c",k+1);
					k++;
				}
				else
				{
					printf("%c",k);
					k--;					
				}
			}
		}
		printf("\n");
	}
	return 0;
}
