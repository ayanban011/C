#include<stdio.h>
int main()
{
	int x1,y1,x,y,r;
	printf("Enter the cntroid of the circle\n");
	scanf("%d %d",&x1,&y1);
	printf("Enter the radius\n");
	scanf("%d",&r);
	printf("Enter the point to check\n");
	scanf("%d %d",&x,&y);
	if((x-x1)*(x-x1)+(y-y1)*(y-y1)==r*r)
		printf("On the circle\n");
	else if((x-x1)*(x-x1)+(y-y1)*(y-y1)<r*r)
		printf("In the circle\n");
	else
		printf("Out of the circle\n");
}
