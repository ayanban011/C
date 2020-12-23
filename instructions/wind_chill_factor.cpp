#include<stdio.h>
#include<math.h>
int main()
{
	float t,v,wcf;
	printf("Enter the temparature and wind velocity\n");
	scanf("%f %f",&t,&v);
	wcf = 35.74 + 0.6215*t + (0.4725*t - 35.75)*pow(v,0.16);
	printf("Wind Chill Factor: %f\n",wcf);
	return 0;
}
