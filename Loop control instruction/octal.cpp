#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,i=0,r=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n>0)
	{
		t = n%8;
		r += t*pow(10,i);
		n = n/8;
		i++;
	}
	printf("Octal Equivalent: %d\n",r);
	return 0;
}
