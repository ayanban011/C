#include<stdio.h>
#include<math.h>
int main()
{
	int l,b;
	printf("Enter length and breadth of the rectangle\n");
	scanf("%d",&l,&b);
	if(l*b>2*(l+b))
		printf("Area\n");
	else
		printf("Perimeter\n");
	return 0;
}
