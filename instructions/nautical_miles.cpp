#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2,dis;
	printf("enter latitudes and longitudes\n");
	scanf("%f %f %f %f",&l1,&l2,&g1,&g2);
	dis = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("Nautical miles: %f",dis);
	return 0;
}
