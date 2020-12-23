#include<stdio.h>
int main()
{
	float bs,dra,hra,gs;
	printf("Enter basic salary of Ramesh\n");
	scanf("%f",&bs);
	dra = bs*40/100;
	hra = bs*20/100;
	gs = bs+dra+hra;
	printf("The gross salary of Ramesh is %f\n",gs);
	return 0;
}
