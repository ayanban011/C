#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,agg,per,avg;
	printf("enter the marks of the five subjects: ");
	scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
	agg = m1+m2+m3+m4+m5;
	avg = agg/500;
	per = avg*100;
	printf("Aggregate marks: %f\n",agg);
	printf("Average marks: %f\n",avg);
	printf("Percentage: %f%\n",per);
	return 0;
}
