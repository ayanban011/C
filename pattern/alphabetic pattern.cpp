#include<stdio.h>
int main()
{
	int i,j;
	char k;
	for(i=1;i<=7;i++)
	{
		k='A';
		for(j=1;j<=13;j++)
		{
			if(j<=8-i||j>=6+i)
			{
			printf("%c",k);
			j<7?k++:k--;
		}
			else{
				if(j==7)
				k--;
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}
