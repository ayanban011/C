#include<stdio.h>
#include<math.h>
int main()
{
	long long int p=10000,r=10,y=100,a;
	printf("Population at the start of the decade: %d\n",p);
	printf("Rate of increase: %d\n",r);
	a = p*pow((1+r),y);
	//printf("%d",a);
	printf("Population at the end of the decade: %d",p);
	return 0;
}
