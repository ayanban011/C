#include<stdio.h>
int main()
{
	float height,weight,bmi;
	printf("Enter your weight(in Kg) and height(in m)\n");
	scanf("%f", &weight);
	scanf("%f", &height);
	bmi = weight/height;
	if(bmi<15.00)
		printf("Starvation\n");
	else if(bmi>=15.1 && bmi<=17.5)
		printf("Anorexic\n");
	else if(bmi>=17.6 && bmi<=18.5)
		printf("Underweight\n");
	else if(bmi>=18.6 && bmi<=24.9)
		printf("Ideal\n");
	else if(bmi>=25.00 && bmi<=25.9)
		printf("Overweight\n");
	else if(bmi>=30.00 && bmi<=30.9)
		printf("Obese\n");
	else if(bmi>=40.00)
		printf("Morbidly Obese\n");
	else
		printf("Your are a special guy\n");
	printf("your BMI: %f\n",bmi);
	return 0;
}
