#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a coordinates\n");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0)
		printf("Origin\n");
	else if(x==0)
		printf("Y-axis\n");
	else if(y==0)
		printf("X-Axis\n");
	else
		printf("X-Y plane\n");
}
