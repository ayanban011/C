#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("Enter 1st point of a line\n");
	scanf("%d %d",&x1,&y1);
	printf("Enter 2nd point of a line\n");
	scanf("%d %d",&x2,&y2);
	printf("Enter 3rd point of a line\n");
	scanf("%d %d",&x3,&y3);
	if(x3-x1 == (y2-y1)/(x2-x1)*(y3-y1))
		printf("Points lying in the same line\n");
	else
		printf("points are non-linear\n");
	return 0;
}
