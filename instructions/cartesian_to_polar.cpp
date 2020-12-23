#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	float r,q;
	printf("enter cartesian co-ordinates\n");
	scanf("%d %d",&x,&y);
	r = sqrt(x*x + y*y);
	q = atan(y/x);
	printf("polar coordinates\n");
	printf("%f %f",r,q);
	return 0;
}
