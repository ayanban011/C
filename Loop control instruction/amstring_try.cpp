#include<stdio.h>
int main()
{
	int n,ams=0,temp,t1;
	printf("Enter a number\n");
	scanf("%d",&n);
	temp = n;
	while(n>0)
	{
		t1=n%10;
		ams+=t1*t1*t1;
		n=n/10;
	}
	printf("%d\n",ams);
	if(temp == ams)
		printf("Amstrong number\n");
	else
		printf("Sorry\n");
	return 0;
}
