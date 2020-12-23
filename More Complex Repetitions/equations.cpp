#include<stdio.h>
int main()
{
	int i;
	float j;
	printf("Equations: i = 2 + (y + 0.5x)\n");
	for(i=1;i<=6;i++)
	{
		for(j=5.5;j<=12.5;j+=0.5)
		{
			printf("Value: %f\n",2+(i+0.5*j));
		}
	}
	return 0;
}
