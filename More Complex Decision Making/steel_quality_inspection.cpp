#include<stdio.h>
int main()
{
	float ha,cc,ts;
	printf("Enter the hardness of the steel\n");
	scanf("%f",&ha);
	printf("Enter the carbon content of the steel\n");
	scanf("%f",&cc);
	printf("Tensile Strength must be greater than 5600\n");
	scanf("%f",&ts);
	if(ha>50.00 && cc<0.7 && ts>5600.00)
		printf("Grade: 10\n");
	else if(ha>50.00 && cc<0.7)
		printf("Grade: 9\n");
	else if(cc<0.7 && ts>5600.00)
		printf("Grade: 8\n");
	else if(ha>50.00 && ts>5600.00)
		printf("Grade: 7\n");
	else if(ha>50.00 || cc<0.7 || ts>5600.00)
		printf("Grade: 6\n");
	else if(ha<=50.00 && cc>=0.7 && ts<=5600.00)
		printf("Grade: 5\n");
	return 0;
}
