#include<stdio.h>
int main()
{
	float dis,m,f,in,cm;
	printf("Enter the distance between two cities (in km): ");
	scanf("%f", &dis);
	m = dis*1000;
	cm = m*100;
	in = cm/30;
	f = in/12;
	printf("distance in meter: %f\n",m);
	printf("distance in centimeter: %f\n",cm);
	printf("distance in inches: %f\n",in);
	printf("distance in foot: %f\n",f);
	return 0;
}
