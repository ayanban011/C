#include<stdio.h>
#include<math.h>
int main()
{
	float ang,val;
	val = 3.14/180;
	printf("Enter the angular value\n");
	scanf("%f",&ang);
	printf("Sin: %f\n",sin(ang*val));
	printf("Cos: %f\n",cos(ang*val));
	printf("tan: %f\n",tan(ang*val));
	printf("Cot: %f\n",1/tan(ang*val));
	printf("cosec: %f\n",1/sin(ang*val));
	printf("sec: %f\n",1/cos(ang*val));
	return 0;
}
