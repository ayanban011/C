#include<stdio.h>
int main()
{
	float far,cel;
	printf("Enter the temparature of the city in farhenhit: ");
	scanf("%f",&far);
	cel = 5*(far-32)/9;
	printf("Temparature in Celcius: %f",cel);
	return 0;
}
