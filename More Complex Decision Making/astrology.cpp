#include<stdio.h>
int main()
{
	int month,date;
	printf("Enter your birth month\n");
	scanf("%d",&month);
	printf("Enter your birth date\n");
	scanf("%d",&date);
	if((month == 12 && date>=22) || (month == 1 && date <=19))
		printf("Capricorn\n");
	else if((month == 1 && date>=20) || (month == 2 && date<=17))
		printf("Aquarius\n");
	else if((month==2 && date>=18)||(month==3 && date<=19))
		printf("Pisces\n");
	else if((month==3 && date>=20) || (month==4 && date<=19))
		printf("Aries\n");
	else if((month==4 && date>=20)|| (month==5 && date<=20))
		printf("Taurus\n");
	else if((month==5 && date>=20)|| (month==6 && date<=20))
		printf("Gemini\n");
	else if((month==6 && date>=21)|| (month==7 && date<=20))
		printf("Cancer\n");
	else if((month==7 && date>=21)|| (month==8 && date<=22))
		printf("Leo\n");
	else if((month==8 && date>=23)|| (month==9 && date<=22))
		printf("Virgo\n");
	else if((month==9 && date>=23)|| (month==10 && date<=22))
		printf("Libra\n");
	else if((month==10 && date>=23)|| (month==11 && date<=21))
		printf("Scorpio\n");
	else if((month==11 && date>=22)|| (month==12 && date<=21))
		printf("Sagittarius\n");
	return 0;
}
