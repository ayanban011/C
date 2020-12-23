#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("Enter 3 sides of the triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the triangle: %f\n",area);
	return 0;
}
