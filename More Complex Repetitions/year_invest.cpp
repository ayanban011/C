#include<stdio.h>
int main()
{
	int year=0, invest =-1, alternate=0;
	while(alternate>invest)
	{
		year++;
		alternate = year*90;
		invest = (1000*year) - 4000;
	}
	printf("The life of machine: %d years\n",year);
	return 0;
}
