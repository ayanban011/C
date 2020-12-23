#include<stdio.h>
int main()
{
	int n =20,map,cap;
	while(n<21)
	{
		printf("Pickup the matchstick between 1 to 4\n");
		scanf("%d",&map);
		cap = 5-map;
		n-=5;
		printf("Computer Picks: %d\n",cap);
		printf("Remaining: %d\n",n);
		if(n>0)
			continue;
		else
			break;
	}
	printf("You pick the last matchstick\n");
	printf("You loss\n");
	return 0;
	
}
