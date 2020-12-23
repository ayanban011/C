#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float x,a,sum=0.0;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	a = (x-1)/x;
	//printf("%f\n",a);
	for(i=1;i<=7;i++)
	{
		sum=sum+pow(a,i);
	}
	printf("Logarithmic sequence: %f\n",sum);
	return 0;
}
