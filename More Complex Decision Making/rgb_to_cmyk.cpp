#include<stdio.h>
int main()
{
	int r,g,b;
	float w,c,y,m,bl;
	printf("Enter RGB value\n");
	scanf("%d %d %d",&r,&g,&b);
	r = r/255;
	g = g/255;
	b = b/255;
	if(r>g && r>b)
		w = r;
	else if(g>r && g>b)
		w = g;
	else
		w = b;
	c = (w - r)/w;
	m = (w - g)/w;
	y = (w -b)/w;
	bl = 1 -w;
	printf("Red: %d\n",r);
	printf("Green: %d\n",g);
	printf("Blue: %d\n",b);
	printf("\n#########################\n");
	printf("Cyan: %f\n",c);
	printf("Magenta: %f\n",m);
	printf("Yellow: %f\n",y);
	printf("Black: %f\n",bl);
	return 0;
}
