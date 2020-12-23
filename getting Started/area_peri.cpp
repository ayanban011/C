#include<stdio.h>
int main()
{
	float l,b,r,arr,peri,arc,circ;
	printf("Enter the length and breadth of the rectangle: ");
	scanf("%f %f",&l,&b);
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	arr = l*b;
	peri = 2*(l+b);
	arc = 3.14*r*r;
	circ = 2*3.14*r;
	printf("Area of the rectangle: %f\n",arr);
	printf("Area of the circle: %f\n",arc);
	printf("Perimeter of the rectangle: %f\n",peri);
	printf("Circumference of the circle: %f\n",circ);
	return 0;
}
