#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	for(i=1;i<=300;i++)
	{
		j=2;
		while(j<=i-1)
		{
			if(i%j==0)
				break;
			j++;
		}
		if(j==i)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
